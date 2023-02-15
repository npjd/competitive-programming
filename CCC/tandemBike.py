sum = 0

# get type of question
question = int(input())

# get n, number of citizens
N = int(input())

# get an array of the speeds of dmojistan
d = input().split(' ')
d = [int(item) for item in d]

# get an array of the speeds of pegland
p = input().split(' ')
p = [int(item) for item in p]

# sort the speeds
d.sort()
p.sort()

# if the question is to find the max sum, then reverse the p array to match a small with a big
if question == 2:
    p.reverse()

# get sum of pairs
for i in range(N):
    intMax = max(d[i],p[i])
    sum+=intMax

print(sum)

# what is the time complexity?
# O(n)