n = int(input())
streams=[int(input()) for _ in range(n)]

instruction = input()

while instruction != '77':
    if instruction == '99':
        index = int(input())
        index-=1
        percentage = int(input())
        newVal = streams[index]*percentage//100
        streams.insert(index+1,streams[index]-newVal)
        streams[index] = newVal
    elif instruction == '88':
        index = int(input())
        index-=1
        newVal = streams[index] + streams[index+1]
        streams.pop(index+1)
        streams[index] = newVal
    instruction = input()
print(*streams)
        
