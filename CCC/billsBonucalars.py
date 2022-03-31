# get input
n, k = input().split()
n = int(n)
k = int(k)
# count for min houses needed
count =0
# tracking people in each house
houses = [0 for _ in range(n+1)]
# final array
res = [0 for _ in range(n+1)]

# get the input
for _ in range(k):
    a,b,x = input().split()
    a = int(a)
    b = int(b)
    x = int(x)
    # simulate people leaving house
    houses[a] -=x 
    # simulate people joining house
    houses[b] +=x
    # check if the house needs more members to join and add it in our final array
    res[a] = min(res[a],houses[a])

for i in range(1,n+1):
    # increment the count
    count += -res[i]

# print all results

print(count)

for i in range(1,n+1):
    print(-res[i],end=" ")

