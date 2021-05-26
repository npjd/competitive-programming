N = int(input())
swifts = list(map(int,input().split(" "))) 
sefamores = list(map(int,input().split(" ")))

K=0

swift_total=0
sefamores_total = 0

for i in range(N):
    swift_total+=swifts[i]
    sefamores_total+=sefamores[i]
    if swift_total==sefamores_total:
        K=i+1

print(K)