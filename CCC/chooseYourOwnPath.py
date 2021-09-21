# initalize node class
class Node:
    def __init__(self, value):
        self.value = value
        self.children = []

# add pages to the set array if they are not in it already and explore the children nodes to it
def getAllPages(node,pages):
    if(node.value not in pages):
        pages.add(node.value)
        for a in node.children:
            getAllPages(a,pages)

def findShortestPath(nodes,level):
    level+=1
    checkNext = []
    for a in nodes:
        if len(a.children) ==0:
            print(level)
            return level
        else:
            for node in a.children:
                checkNext.append(node)
    return findShortestPath(checkNext,level)


n = int(input())

pageMap = {}

# init a map of nodes
for i in range(1,n+1):
    pageMap[i] = Node(i)

for i in range(1,n+1):
    line = input().split()
    line = list(map(int,line))
    for j in range(1,line[0]+1):
        pageMap[i].children.append(pageMap[line[j]])

pages = set()
getAllPages(pageMap[1],pages)
if len(pages) == n:
    print("Y")
else:
    print("N")

findShortestPath([pageMap[1]],0)