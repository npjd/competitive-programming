n = int(input())
paths = [-1 for _ in range(n+1)]

startingPts = []
endingPts = []
numPaths = 0
p1,p2 = input().split(" ")
p1 = int(p1)
p2 = int(p2)

while (p1!=0 or p2!=0):
    startingPts.append(p1)
    endingPts.append(p2)
    numPaths +=1
    p1,p2 = input().split(" ")
    p1 = int(p1)
    p2 = int(p2)

# print(startingPts)
# print(endingPts)

def findNumPaths(pt):
    # check if our point is the place we are looking for
    if pt == n:
        # return one if so
        return 1
    else:
        # have a sum coutner to check the number of paths to our destination
        sum =0
        # loop though all the paths
        for i in range(numPaths):
            # check if we are in a starting one
            if startingPts[i] == pt:
                # if we've already been to this point and we know how many paths lead to the end, we can add it to our sum
                answer = paths[endingPts[i]]
                if answer != -1:
                    sum += answer
                # otherwise, we will move to the end point and see how many times it reaches our destination and append that to the path array and then return the sum
                else:
                    a = findNumPaths(endingPts[i])
                    paths[endingPts[i]] = a
                    sum +=a
        return sum

print(findNumPaths(1))