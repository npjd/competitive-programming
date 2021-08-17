k = int(input())
pairs = []
for i in range(k):
    pairs.append(input().split())
code = input()

while len(code)!=0:
    for i in range(len(pairs)):
        if pairs[i][1] in code:
            pos = code.find(pairs[i][1])
            if pos ==0:
                print(pairs[i][0],end='')
                code = code[len(pairs[i][1]):]
