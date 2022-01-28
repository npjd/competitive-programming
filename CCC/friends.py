# BFS BABYY
def bfs(f1,f2,graph):
    # count distance
    res = -1
    # if the neighbour is the friend we're looking for, we stop at 0
    curr = graph[f1]
    if curr == f2:
        return 0
    res = 1
    while True:
        # find the neighbouring friend
        curr = friends[curr]
        # if it's the friend we're looking for, we retrun it
        if curr == f2:
            return res
        # if we're back at the first friend, we're done
        if curr == f1:
            return -1
        res += 1

# takes in number of friend pairs
n = int(input())
# init friend array
friends = [0 for _ in range(10000)]

# add friend combos to graph
for i in range(n):
    f1,f2 = input().split(' ')
    f1 = int(f1)
    f2 = int(f2)
    friends[f1] = f2

f1,f2 = input().split(' ')
f1 = int(f1)
f2 = int(f2)

while f1 != 0 or f2 != 0:
    # do bfs
    res = bfs(f1,f2,friends)
    if res == -1:
        print("No")
    else:
        print("Yes",res)
    f1,f2 = input().split(' ')
    f1 = int(f1)
    f2 = int(f2)