ogString = input()
encryptedString = input()
encryptedAns = input()
ans = ""

dict = {}

for i in range(len(ogString)):
    dict[encryptedString[i]] = ogString[i]

for i in range(len(encryptedAns)):
    ans += dict[encryptedAns[i]]

print(ans)