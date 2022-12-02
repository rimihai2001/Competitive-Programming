with open('input.txt') as f:
    lines = [line for line in f]

score = 0

for miscare in lines:
    miscare = miscare.split()
    if miscare[0] == 'A':
        if miscare[1] == "X":
            score += 0
            score += 3
        elif miscare[1] == "Y":
            score += 3
            score += 1
        elif miscare[1] == "Z":
            score += 6
            score += 2

    elif miscare[0] == 'B':
        if miscare[1] == "X":
            score += 0
            score += 1
        elif miscare[1] == "Y":
            score += 3
            score += 2
        elif miscare[1] == "Z":
            score += 6
            score += 3

    elif miscare[0] == "C":
        if miscare[1] == "X":
            score += 0
            score += 2
        elif miscare[1] == "Y":
            score += 3
            score += 3
        elif miscare[1] == "Z":
            score += 6
            score += 1

print(score)
