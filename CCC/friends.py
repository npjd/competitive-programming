n = int(input())
friend = []
visited = []
for i in range(10000):
    friend.append(0)

for i in range(n):
    integers = input().split()
    friend[int(integers[0])] = int(integers[1])

friendInput = input().split()
friend1 = int(friendInput[0])
friend2 = int(friendInput[1])

while friend1 != 0 and friend2 != 0:
    for i in range(10000):
        visited.append(False)
    distance = -1

    while visited[friend1]==False and friend1!=friend2:
        visited[friend1] = True
        distance += 1
        friend1 = friend[friend1]
    
    if friend1 ==friend2:
        print("Yes",distance)
    else:
        print("No")    
    friendInput = input().split()
    friend1 = int(friendInput[0])
    friend2 = int(friendInput[1])
        