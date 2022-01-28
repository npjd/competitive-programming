n = int(input())
friend = []
visited = []
for i in range(10000):
    friend.append(0)
# the friend array maps the index to which person that friend index is friends with
for i in range(n):
    integers = input().split()
    # we do that here!!!
    friend[int(integers[0])] = int(integers[1])
# grab the two friends to compare
friendInput = input().split()
friend1 = int(friendInput[0])
friend2 = int(friendInput[1])

while friend1 != 0 and friend2 != 0:
    # set all visited friends to false
    for i in range(10000):
        visited.append(False)
    # init distance
    distance = -1
    # if we've already visited this node, we don't loop again.
    # if both the friends are the same we quit the loop as well as to not repeat ourselves
    while visited[friend1]==False and friend1!=friend2:
        # set the current node as visited
        visited[friend1] = True
        distance += 1
        # set the next node we're visiting to the current node's friend
        friend1 = friend[friend1]
    
    if friend1 ==friend2:
        print("Yes",distance)
    else:
        print("No")    
    friendInput = input().split()
    friend1 = int(friendInput[0])
    friend2 = int(friendInput[1])