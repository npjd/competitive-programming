inputs = input().split()
n = int(inputs[0])
roundsNum = int(inputs[1])

scores = [ 0 for _ in range(n) ]
ranks = [1 for _ in range(n) ]
worst = [1 for _ in range(n)]

for _ in range(roundsNum):
    numArr = list(map(int,input().split()))
    for i in range(n):
        scores[i] += numArr[i]
    
    rankingsByScore = sorted(enumerate(scores), key=lambda x: x[1], reverse=True)

    curRank = 0
    topScore = 999999999999

    for yodeller,score in rankingsByScore:
        if score< topScore:
            curRank +=1
        ranks[yodeller] = curRank
        topScore = score
    
    for yodeller, rank in enumerate(ranks):
        if rank > worst[yodeller]:
            worst[yodeller] = rank

for yodeller, rank in enumerate(ranks):
    if rank == 1:
        print(f"Yodeller {yodeller+1} is the TopYodeller: score {scores[yodeller]}, worst rank {worst[yodeller]}")
