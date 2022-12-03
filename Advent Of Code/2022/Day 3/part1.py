with open('Advent Of Code/2022/Day 3/input.txt') as f:
    lines = [line.strip("\n") for line in f]

ans = 0

for l in lines:
    mid = len(l)//2
    p1, p2 = l[:mid], l[mid:]
    int_set = set(p1).intersection(p2)
    for i in int_set:
        if i >= "a" and i <= "z":
            ans += ord(i)-96
        else:
            ans += ord(i)-65+27
print(ans)
