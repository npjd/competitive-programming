n = int(input())
streams=[int(input()) for _ in range(n)]

instruction = int(input())

while instruction != 77:
    if(instruction == 99):
        index = int(input())
        percentage = int(input())
        newVal = streams[index-1] * (percentage)//100
        remainder = streams[index-1] - newVal
        streams[index-1] = newVal
        streams.insert(index, remainder)
    elif(instruction == 88):
        index = int(input())
        streams[index-1]= streams[index-1] + streams[index]
        streams.pop(index)
    instruction = int(input())

string = ""
for i in streams:
    string += str(i) + " "
print(string)
