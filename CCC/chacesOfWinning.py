t = int(input())-1
g = int(input())

scores = [0]*4
games = [(0, 1), (0, 2), (0, 3), (1, 2), (1, 3), (2, 3)]

def recurse(index, score):
    if index == len(games):
        return 1 if (score.index(max(score)) == t and score.count(max(score)) == 1) else 0
    res = 0
    a, b = games[index]
    new_score = list(score)
    new_score[a] += 3
    res += recurse(index + 1, new_score)

    new_score = list(score)
    new_score[a] += 1
    new_score[b] += 1
    res += recurse(index + 1, new_score)

    new_score = list(score)
    new_score[b] += 3
    res += recurse(index + 1, new_score)
    return res


for i in range(g):
    resinput = input().split(" ")
    a = int(resinput[0]) -1
    b = int(resinput[1]) -1
    sA = int(resinput[2])
    sB = int(resinput[3])
    if sA>sB:
        scores[a]+=3
    elif sA<sB:
        scores[b]+=3
    elif sA==sB:
        scores[a]+=1
        scores[b]+=1
    games.remove((a,b))

print(recurse(0, scores))