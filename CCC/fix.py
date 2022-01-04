n = int(input())

for _ in range(n):
    word1 = input()
    word2 = input()
    word3 = input()

    if word1.startswith(word2) or word1.startswith(word3) or word2.startswith(word1) or word2.startswith(word3) or word3.startswith(word1) or word3.startswith(word2) or word1.endswith(word2) or word1.endswith(word3) or word2.endswith(word1) or word2.endswith(word3) or word3.endswith(word1) or word3.endswith(word2):
        print("No") 
    else:
        print("Yes")