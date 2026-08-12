import sys

def main():
    data = list(map(int, sys.stdin.buffer.read().split()))
    it = iter(data)
    t = next(it)
    out = []
    for _ in range(t):
        n = next(it)
        freq = [0] * 1001
        for _ in range(n):
            x = next(it)
            freq[x] += 1

        best_val = 1
        best_cnt = freq[1]
        for v in range(2, 1001):
            c = freq[v]
            if c > best_cnt or (c == best_cnt and v < best_val):
                best_cnt = c
                best_val = v
        out.append(str(best_val))

    sys.stdout.write("\n".join(out))

if __name__ == "__main__":
    main()
