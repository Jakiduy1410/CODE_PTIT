def check(s: str):
    cnt_a, cnt_b, cnt_c = 0,0,0
    for ch in s:
        if ch == 'A':
            cnt_a += 1
        elif ch == 'B':
            cnt_b += 1
        else:
            cnt_c += 1
    return cnt_a <= cnt_b and cnt_b <= cnt_c and cnt_a != 0

def backtrack(pos, n, cur, res):
    if pos == n:
        if check(cur):
            res.append(cur)
        return

    for ch in ('A', 'B', 'C'):
        backtrack(pos + 1, n, cur + ch, res)


def main():
    n = int(input())
    res = []
    for i in range(3,n+1):
        backtrack(0, i, "", res)
    print("\n".join(res))

if __name__ == "__main__":
    main()