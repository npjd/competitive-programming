# initalize node class
class Node:
    def __init__(self, value):
        self.value = value
        self.children = []

# add pages to the set array if they are not in it already and explore the children nodes to it
def getAllPages(node,pages):
    # if we haven't seen this page before, we'll add it to the set and explore the rest of it's children
    if(node.value not in pages):
        pages.add(node.value)
        # explore the children of the node
        for a in node.children:
            getAllPages(a,pages)


def findShortestPath(nodes,level):
    # whenever we look for another book, we're adding one more to the level
    level+=1
    # array to check the next time
    checkNext = []
    for a in nodes:
        # if the node has no children and we've reached an ending, return how long it took us to take there
        if len(a.children) ==0:
            print(level)
            return level
        # else, just add the nodes children to the array
        else:
            for node in a.children:
                checkNext.append(node)
    # run it again
    return findShortestPath(checkNext,level)

# get input
n = int(input())

# map of our nodes
pageMap = {}

# init a map of nodes
for i in range(1,n+1):
    pageMap[i] = Node(i)

for i in range(1,n+1):
    # get the children
    line = input().split()
    line = list(map(int,line))
    # loop through the children
    for j in range(1,line[0]+1):
        # add the node datatype to the children array 
        pageMap[i].children.append(pageMap[line[j]])

pages = set()
getAllPages(pageMap[1],pages)
if len(pages) == n:
    print("Y")
else:
    print("N")

findShortestPath([pageMap[1]],0)