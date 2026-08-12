def main():
    t = int(input())
    res = []
    for _ in range(t):
        res.append(input())
    print(len(set(res)))

main()