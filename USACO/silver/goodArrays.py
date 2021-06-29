tests = int(input())
n=[]
a=[]
for i in range(tests):
    n.append(int(input()))
    a.append(list(map(int, input())))

for test in range(tests):
    ans = 0
    hash ={}
    hash[0] = 1
    prefix_sum = 0
    sub_len = 0

    for i in range(n[test]):
        prefix_sum += a[test][i]
        sub_len = i+1
        if (prefix_sum - sub_len) in hash:
            ans += hash[prefix_sum - sub_len]
            hash[prefix_sum - sub_len] += 1
            print(hash)
            print(ans)
        else:
            hash[prefix_sum - sub_len] = 1
