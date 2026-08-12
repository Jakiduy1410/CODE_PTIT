def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        res = [0] * 1000000
        for x in a:
            res[x] += 1

        ok = False
        ans = 1e9
        half = n // 2

        for value, cnt in enumerate(res):
            if cnt > half:
                if value < ans:
                    ans = value
                    ok = True


        print(ans if ok else "NO")

main()
