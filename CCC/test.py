nums = [-2,1,-3,4,-1,2,1,-5,4]

maxSum = 0

for i in range(len(nums)):
    for j in range(i,len(nums)):
        maxSum = max(maxSum,sum(nums[i:j+1]))

print(maxSum) 
