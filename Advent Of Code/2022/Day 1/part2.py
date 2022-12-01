with open('input.txt') as f:
    lines = [line[:-1] for line in f]


curr = 0
vmax = []

for i in lines:
    if len(i) == 0:
        vmax.append(curr)
        curr = 0
    else:
        curr += int(i)

vmax.append(curr)
vmax.sort()
print(vmax[-1] + vmax[-2] + vmax[-3])
