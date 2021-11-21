inputs = input().split()
n = int(inputs[0])
roundsNum = int(inputs[1])

worstRanks = [1 for i in range(n)]
ranks = [1 for i in range(n)]
scores = [0 for i in range(n)]

for i in range(roundsNum):
    round = map(int, input().split())
    for i,score in enumerate(round):
        scores[i] += score
    
    rankingsByScore = sorted(enumerate(scores), key=lambda x:x[1])[::-1]

    cur_rank = 0
    last_score = 99999999999999999999999999999999

    for c, s in rankingsByScore:
        if s < last_score:
            cur_rank +=1
        ranks[c] = cur_rank
        last_score = s
    
    for c, r in enumerate(ranks):
        if r > worstRanks[c]:
            worstRanks[c] = r 
    print(worstRanks)

for c, r in enumerate(ranks):
    if r == 1:
        print("Yodeller {} is the TopYodeller: score {}, worst rank {}".format(c+1, score[c], worstRanks[c]))
    

