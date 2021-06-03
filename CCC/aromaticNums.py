num = input()
romans = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}

ans = 0

for i in range(0,len(num),2):
    temp = int(num[i]) * romans[num[i+1]]
    try:
        if romans[num[i+1]] >= romans[num[i+3]]:
            ans += temp
        else:
            ans -= temp
    except:
        ans+=temp

print(ans)