with open('input.txt') as f:
    lines = [line[:-1] for line in f]


elf_max = 0
curr = 0

for i in lines:
    if len(i) == 0:
        elf_max = max(elf_max, curr)
        curr = 0
    else:
        curr += int(i)

elf_max = max(elf_max, curr)
print(elf_max)
