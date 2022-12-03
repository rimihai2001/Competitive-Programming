with open('Advent Of Code/2022/Day 3/input.txt') as f:
    lines = [line.strip("\n") for line in f]

ans = 0

for i in range(0,len(lines),3):
    set_elf = set(lines[i]).intersection(lines[i+1]).intersection(lines[i+2])
    for i in set_elf:
        if i >= "a" and i <= "z":
            ans += ord(i)-96
        else:
            ans += ord(i)-65+27

print(ans)