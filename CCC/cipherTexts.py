ogString = input()
encryptedString = input()
encryptedAns = input()
ans = ""

dict = {}

for i in range(len(ogString)):
    dict[encryptedString[i]] = ogString[i]

for i in range(len(encryptedAns)):
    try:
        ans += dict[encryptedAns[i]]
    except:
        ans+="."

print(ans)