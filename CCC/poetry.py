n = int(input())

def find_vowel(word):
    for i in word[::-1]:
        if i in 'aeiouAEIOU':
            return i
    return word

for i in range(n):
    word1 = input().lower().split(" ")[-1]
    word2 = input().lower().split(" ")[-1]
    word3 = input().lower().split(" ")[-1]
    word4 = input().lower().split(" ")[-1]

    syllable1 = find_vowel(word1)
    syllable2 = find_vowel(word2)
    syllable3 = find_vowel(word3)
    syllable4 = find_vowel(word4)

    if syllable1 == syllable2 == syllable3 == syllable4:
        print("perfect")
    elif syllable1 == syllable2 and syllable3==syllable4:
        print("even")
    elif syllable1 == syllable3 and syllable2==syllable4:
        print("cross")
    elif syllable1 == syllable4 and syllable2==syllable3:
        print("shell")
    else:
        print("free")


