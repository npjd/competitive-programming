letters = input()
swaps = 0
Scount = letters.count('S')
Mcount = letters.count('M')
Lcount = letters.count('L')


section1Ms = letters[:Lcount].count('M')
section1Ss = letters[:Lcount].count('S')
section2Ls = letters[Lcount:Lcount+Mcount].count('L')
section2Ss = letters[Lcount:Lcount+Mcount].count('S')
section3Ms = letters[Lcount+Mcount:].count('M')
section3Ls = letters[Lcount+Mcount:].count('L')

if section1Ms != 0 and section2Ls!=0:
    if section1Ms == section2Ls:
        swaps += section1Ms
        section1Ms = 0
        section2Ls = 0
    elif section1Ms > section2Ls:
        swaps += section2Ls
        section1Ms -= section2Ls
        section2Ls = 0
    elif section1Ms < section2Ls:
        swaps += section1Ms
        section2Ls -= section1Ms
        section1Ms = 0

if section1Ss != 0 and section3Ls!=0:
    if section1Ss == section3Ls:
        swaps += section1Ss
        section1Ss = 0
        section3Ls = 0
    elif section1Ss > section3Ls:
        swaps += section3Ls
        section1Ss -= section3Ls
        section3Ls = 0
    elif section1Ss < section3Ls:
        swaps += section1Ss
        section3Ls -= section1Ss
        section1Ss = 0

if section2Ss != 0 and section3Ms!=0:
    if section2Ss == section3Ms:
        swaps += section2Ss
        section2Ss = 0
        section3Ms = 0
    elif section2Ss > section3Ms:
        swaps += section3Ms
        section2Ss -= section3Ms
        section3Ms = 0
    elif section2Ss < section3Ms:
        swaps += section2Ss
        section3Ms -= section2Ss
        section2Ss = 0

swaps += (section1Ms + section1Ss + section2Ls + section2Ss + section3Ms + section3Ls)/3*2
print(int(swaps))