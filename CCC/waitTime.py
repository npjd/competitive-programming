# get total number of lines
m = int(input())
# declare time variable that starts at 0
time = 0

# reply array checks for wether or not we have replied to person N
reply = [0 for _ in range(102)]
# sent array stores the time we have recieved messages from person N
sent = [0 for _ in range(102)]
# final[n] stores to the total time it took for us to reply to sent[N] on all occassions by taking the difference of sent[n] - the current time when we send a message back to person N
final = [0 for _ in range(102)]

# loop through all lines
for i in range(m):
    # get the line
    commandNum = input()
    # split the line into a list
    commandNum = commandNum.split()
    command = commandNum[0]
    n = int(commandNum[1])
    # check for the command
    if command == "S":
        # if we are sending a message, we are setting our reply state to true and getting the difference between sent[n] (the time we originally received the message) - the current time
        reply[n] = 1
        # we do += here because we can always get more messages from the person
        final[n] += time - sent[n]
    elif command == "R":
        # if we are recieving a message, we are setting our reply state to false and setting the time we recieved the message to the current time
        sent[n] = time
        reply[n] = -1
    elif command =="W":
        # if we are waiting, we increment time by n-2. We do n-2 because A. We are cotinously already incrementing the time by 1 and B. this entire time is 0 indexed. So we subtract by 2
        time += n-2
    time+=1

for j in range(0,102):
    if reply[j] == 1:
        print(j,final[j])
    elif reply[j] == -1:
        print(j,-1)
    else:
        continue