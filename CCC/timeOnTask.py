max_time = int(input())
num_chores = int(input())
chores = []
for _ in range(num_chores):
    chore = int(input())
    chores.append(chore)
chores.sort()

timesused = 0
i = 0
while i < num_chores and timesused + chores[i] <= max_time:
    timesused += chores[i]
    i += 1
print(i)