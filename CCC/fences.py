area =0
n = int(input())
h = input().split(" ")
for i in range(len(h)):
    h[i] = int(h[i])

w = input().split(" ")
for i in range(len(w)):
    w[i] = int(w[i])

for i in range(n):
    h1 = h[i]
    h2 = h[i+1]
    width = w[i]
    area += width * (h1+h2)/2

print(area)
    