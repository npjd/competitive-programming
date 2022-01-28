# handle input
inputs = input().split()
n = int(inputs[0])
roundsNum = int(inputs[1])

# array for the worst rank for each player
worstRanks = [1 for i in range(n)]
# array for their current ranks
ranks = [1 for i in range(n)]
# array for the current scores
scores = [0 for i in range(n)]

for i in range(roundsNum):
    # take in the round and create a map of player index : score
    round = map(int, input().split())
    # update the scores
    for i,score in enumerate(round):
        scores[i] += score
    # sort the current scores by rank (it will be a map of index:score and ordered by rank)
    rankingsByScore = sorted(enumerate(scores), key=lambda x:x[1])[::-1]

    cur_rank = 0
    last_score = 99999999999999999999999999999999

    # update the ranks of each player

    # loop through the current rankings
    for c, s in rankingsByScore:
        # if the score is less than the last score we added, we will increase the rank, otherwise the players are tied and have the same rank
        if s < last_score:
            cur_rank +=1
        # update the rank
        ranks[c] = cur_rank
        # update the last score
        last_score = s
    # check to see if a player has gone below their worst rank
    for c, r in enumerate(ranks):
        if r > worstRanks[c]:
            worstRanks[c] = r 
    print(worstRanks)

for c, r in enumerate(ranks):
    if r == 1:
        print("Yodeller {} is the TopYodeller: score {}, worst rank {}".format(c+1, score[c], worstRanks[c]))
    

