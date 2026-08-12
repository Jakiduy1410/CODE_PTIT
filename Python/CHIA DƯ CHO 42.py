import sys

def main():
    data = list(map(int, sys.stdin.read().split()))
    res = [0] * 42
    for x in data:
        res[x % 42] += 1
    print(sum(1 for v in res if v > 0))

if __name__ == "__main__":
    main()
