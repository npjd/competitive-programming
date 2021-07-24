letters = input()

lCount = letters.count('L')
mCount = letters.count('M')
sCount = letters.count('S')

section1Ms = letters[0:lCount].count("M")
section1Ss = letters[0:lCount].count("S")

section2Ls = letters[lCount:lCount+mCount].count("L")
section2Ss = letters[lCount:lCount+mCount].count("S")

section3Ls = letters[lCount+mCount:].count("L")
section3Ms = letters[lCount+mCount:].count("M")

swaps = 0

if section1Ss != 0 and section3Ls !=0:
    if section1Ss == section3Ls:
        swaps += section1Ss
        section1Ss = 0
        section3Ls = 0
    elif section1Ss > section3Ls:
        swaps += section3Ls
        section1Ss -= section3Ls
        section3Ls = 0
    else:
        swaps += section1Ss
        section3Ls -= section1Ss
        section1Ss = 0

if section1Ms != 0 and section2Ls !=0:
    if section1Ms == section2Ls:
        swaps += section1Ms
        section1Ms = 0
        section2Ls = 0
    elif section1Ms > section2Ls:
        swaps += section2Ls
        section1Ms -= section2Ls
        section2Ls = 0
    else:
        swaps += section1Ms
        section2Ls -= section1Ms
        section1Ms = 0

if section2Ss != 0 and section3Ms !=0:
    if section2Ss == section3Ms:
        swaps += section2Ss
        section2Ss = 0
        section3Ms = 0
    elif section2Ss > section3Ms:
        swaps += section3Ms
        section2Ss -= section3Ms
        section3Ms = 0
    else:
        swaps += section2Ss
        section3Ms -= section2Ss
        section2Ss = 0
swaps += (section1Ms + section1Ss + section2Ls + section2Ss + section3Ls + section3Ms)/3*2

print(int(swaps))
