def is_perm(m1,m2):
    for i in range(26):
        letter = 'a'+i
        if m1[letter] != m2[letter]:
            return False
    return True
    
needle = input()
haystack = input()

needle_f = {}
haystack_f = {}
used = {}

for char in needle:
    needle_f[char] +=1

ans =0

for i in range(0, len(haystack)-len(needle)+1):
    sub_str = haystack[i:i+len(needle)]
    if i == 0:
        for j in sub_str:
            haystack_f[j] +=1
    else:
        added = haystack[i+len(needle)-1]
        removed = haystack[i-1]
        haystack_f[added] +=1
        haystack_f[removed] -=1
        if(is_perm(haystack_f, needle_f) and used[sub_str] == False):
            ans +=1
            used[sub_str] = True

print(ans)