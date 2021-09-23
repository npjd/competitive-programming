class Node:
    def __init__(self, value):
        self.value = value
        self.children = []

def getAllPages(node, pages):
    if (node.value not in pages):
        pages.add(node.value)
        for child in node.children:
            getAllPages(child, pages)

def findShortestPath(nodes,level):
    level+=1
    nextNodes =[]
    for node in nodes:
        if(len(node.children)==0):
            return level
        else:
            for childs in node.children:
                nextNodes.append(childs)
    return findShortestPath(nextNodes,level)

n = int(input())
bookNodes = {}
for i in range(1,n+1):
    bookNodes[i] = Node(i)
for i in range(1,n+1):
    array = input().split()
    array = list(map(int, array))
    for j in range(1,array[0]+1):
        bookNodes[i].children.append(bookNodes[array[j]])

pages = set()
getAllPages(bookNodes[1], pages)
if (len(pages) == n):
    print("Y")
else:
    print("N")

print(findShortestPath([bookNodes[1]],0))


    

