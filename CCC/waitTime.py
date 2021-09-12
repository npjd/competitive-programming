m = int(input())
time = 0

reply = [0 for _ in range(102)]
sent = [0 for _ in range(102)]
final = [0 for _ in range(102)]

for i in range(m):
    commandNum = input()
    commandNum = commandNum.split()
    command = commandNum[0]
    n = int(commandNum[1])
    if command == "S":
        reply[n] = 1
        final[n] += time - sent[n]
    elif command == "R":
        sent[n] = time
        reply[n] = -1
    elif command =="W":
        time += n-2
    time+=1

for j in range(0,102):
    if reply[j] == 1:
        print(j,final[j])
    elif reply[j] == -1:
        print(j,-1)
    else:
        continue