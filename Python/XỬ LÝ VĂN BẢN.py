import sys

def main():
    s = sys.stdin.read().strip().split()
    lines = [[] for _ in range(200)]
    cnt = 0

    for w in s:
        lines[cnt].append(w)
        if w[-1] in "?!.":
            cnt += 1

    for i in range(cnt):
        if not lines[i]:
            continue
        lines[i][0] = lines[i][0].capitalize()

        for j in range(1, len(lines[i])):
            lines[i][j] = lines[i][j].lower()
        w = lines[i][-1]
        w = w[:-1]
        lines[i][-1] = w
        print(" ".join(lines[i]))

main()
