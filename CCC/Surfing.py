n = int(input())
nodes ={}
def get_key(val): 
    for key, value in nodes.items(): 
         if val == value: 
             return key 
graph = [[False for i in range(n+1)] for _ in range(n+1)]
node = 0

for i in range(n):
    webpage = input()
    HTMLcode =""
    HTML = ""
    while HTML !="</HTML>":
        HTML = input()
        HTMLcode += HTML
    while HTMLcode.find("A HREF=") != -1:
        HTMLlink = HTMLcode.find("A HREF=")
        start = HTMLcode.find('"', HTMLlink) 
        end = HTMLcode.find('"', start + 1)
        link = HTMLcode[start + 1: end]
        HTMLcode = HTMLcode[end + 1:] 
        if webpage not in nodes:
            nodes[webpage] = node
            node += 1
        if link not in nodes:
            nodes[link] = node
            node += 1
        graph[nodes[webpage]][nodes[link]] = True


start = input()
while start != "The End":
    end = input()
    flag = [False for i in range(n+1)]
    queue = [nodes[start]]
    flag[nodes[start]] = True
    end = nodes[end]
    while queue != []:
        node = queue.pop(0)
        for i in range(n+1):
            if graph[node][i] and not flag[i]:
                print("Link from", get_key(node), "to", get_key(i))
                flag[i] = True
                queue.append(i)
    if flag[end]:
        print("Can surf from", start, "to", get_key(end))
    else:
        print("Can't surf from", start, "to", get_key(end))
    start = input()
