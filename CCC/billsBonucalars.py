n, k = input().split()
n = int(n)
k = int(k)
count =0
houses = [0 for _ in range(n+1)]
res = [0 for _ in range(n+1)]


for _ in range(k):
    a,b,x = input().split()
    a = int(a)
    b = int(b)
    x = int(x)
    houses[a] -=x 
    houses[b] +=x
    res[a] = min(res[a],houses[a])

for i in range(1,n+1):
    count += -res[i]

print(count)

for i in range(1,n+1):
    print(-res[i],end=" ")

