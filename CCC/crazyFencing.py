n = int(input())

heights = list(map(int, input().split()))
widhts = list(map(int, input().split()))

area = 0

for i in range(n):
    area += ((heights[i]+heights[i+1])/2)*widhts[i]

print(area)