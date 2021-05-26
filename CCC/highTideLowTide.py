n = int(input())
tides = list(map(int,input().split(" ")))
tides.sort()

mid = n//2

if n%2==0:
    for i in range(mid):
        if i ==mid-1:
            print(tides[mid-i-1],tides[mid+i])
        else:
            print(tides[mid-i-1],tides[mid+i],end=" ")
else:
    for i in range(mid):
        print(tides[mid-i-1],tides[mid+i],end=" ")
    print(tides[0])
