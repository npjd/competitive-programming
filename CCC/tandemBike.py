sum = 0

question = int(input())

N = int(input())

d = input().split(' ')
d = [int(item) for item in d]

p = input().split(' ')
p = [int(item) for item in p]

d.sort()
p.sort()

if question == 2:
    p.reverse()

for i in range(N):
    intMax = max(d[i],p[i])
    sum+=intMax

print(sum)
