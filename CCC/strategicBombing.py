# track answer
ans = 0
# array of roads
roads =[]
alphabet = ["A","B","C","D","E",'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V',"W",'X',"Y",'Z']
graph = {'A': [],
         'B': [],
         'C': [],
         'D': [],
         'E': [],
         'F': [],
         'G': [],
         'H': [],
         'I': [],
         'J': [],
         'K': [],
         'M': [],
         'O': [],
         'P': [],
         'Q': [],
         'R': [],
         'S': [],
         'T': [],
         'U': [],
         'V': [],
         'W': [],
         'X': [],
         'Y': [],
         'Z': []
}
visited = {}
# get input int
while True:
    string = input()
    if string == "**":
        break
    graph[string[0]].append(string[1])
    graph[string[1]].append(string[0])
    roads.append(string)
# loop through all possible roads
for road in roads:
    temp1 = road[0]
    temp2 = road[1]
    # reset array for visisted nodes
    for value in range(26):
        visited[alphabet[value]] = False
    # start the bfs search at node A
    queue = ["A"]
    # remove the road from the graph temporarliy
    graph[temp1].remove(temp2)
    graph[temp2].remove(temp1)
    # while the queue is not empty
    while queue != []:
        # get the current node in queue and get rid of it
        current = queue.pop(0)
        # loop through it's children
        for i in graph[current]:
            # if the child was not visisted, add it to the queue
            if visited[i] == False:
                queue.append(i)
                visited[i] = True
    # if b was not visisted, that mean taht road is valid to blow up
    if visited["B"] == False:
        print("YES",road)
        ans +=1
    # add the road back to the graph
    graph[temp1].append(temp2)
    graph[temp2].append(temp1)

print(ans)
