with open('input.txt') as f:
    lines = [line for line in f]

score = 0

for miscare in lines:
    miscare = miscare.split()
    if miscare[0] == 'A':
        if miscare[1] == "X":
            score += 1
            score += 3
        elif miscare[1] == "Y":
            score += 2
            score += 6
        elif miscare[1] == "Z":
            score += 3

    elif miscare[0] == 'B':
        if miscare[1] == "X":
            score += 1
        elif miscare[1] == "Y":
            score += 2
            score += 3
        elif miscare[1] == "Z":
            score += 3
            score += 6

    elif miscare[0] == "C":
        if miscare[1] == "X":
            score += 1
            score += 6
        elif miscare[1] == "Y":
            score += 2
        elif miscare[1] == "Z":
            score += 3
            score += 3

print(score)
