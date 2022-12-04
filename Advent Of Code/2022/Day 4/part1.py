with open('Advent Of Code/2022/Day 4/input.txt') as f:
    lines = [line.strip("\n") for line in f]

elf_no = 0

for line in lines:
    l1, l2 = line.split(",")
    n1, n2 = [int(x) for x in l1.split("-")]
    m1, m2 = [int(x) for x in l2.split("-")]
    if (m1 <= n1 and n2 <= m2) or (n1 <= m1 and m2 <= n2):
        elf_no += 1
 
print(elf_no)