k = int(input())
pairs = []
for i in range(k):
    pairs.append(input().split())
code = input()
ans = ""
while len(code) > 0:
    for i in range(len(pairs)):
        nums = pairs[i][1]
        if code[0:len(nums)] == nums:
            ans += pairs[i][0]
            code = code[len(nums):]
            break
print(ans)
