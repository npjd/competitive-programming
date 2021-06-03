n = int(input())
line1 = input().split(" ")
line2 = input().split(" ")

partners = {}

for i in range(n):
    first_person = line1[i]
    if first_person in partners:
        if partners[first_person] == line2[i]:
            continue
        else:
            print('bad')
            quit()
    else:
        partners[first_person] =line2[i]
        partners[line2[i]] = first_person
print("good")