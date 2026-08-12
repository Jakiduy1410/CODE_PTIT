import sys

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    mp = {}
    tp = ""
    for _ in range(n):
        line = data.readline().decode()
        if line.strip() == "":
            tp = ""
            continue

        if not tp:
            tp = line.strip()
            mp[tp] = mp.get(tp,0)
        else:
            mp[tp] += 1
    for key,val in mp.items():
        print(f"{key}: {val}")

main()