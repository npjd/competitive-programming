n = [int(i) for i in input()]
p = int(input())

pNum = n[-p]
res =""

for i in range(len(n)):
    if i == len(n)-p:
        res += str(pNum)
        continue
    if i<len(n)-p:
        res += str( (n[i]+pNum) % 10)
    if i>len(n)-p:
        res += str(abs(n[i]-pNum) %10)

print(res)