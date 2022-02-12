m = int(input())
n = int(input())
k = int(input())

rows = [False for _ in range(m)]
cols = [False for _ in range(n)]

for _ in range(k):
    dir,num = input().split()
    num = int(num)
    if dir == 'R':
        rows[num-1] = ~rows[num-1]
    else:
        cols[num-1] = ~cols[num-1]

ans = 0
for i in range(m):
    for j in range(n):
        if rows[i] != cols[j]:
            ans += 1

print(ans)