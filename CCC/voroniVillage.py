n = int(input())

villages =[]
for i in range(n):
    vil = int(input())
    villages.append(vil)

villages.sort()

ans = 1000000000000000000000000000

for i in range(1,n-1):
    average1 = (villages[i] - villages[i-1]) /2
    average2 = (villages[i+1]-villages[i])/2
    sum = average1 + average2
    ans = min(ans,sum)

print(ans)