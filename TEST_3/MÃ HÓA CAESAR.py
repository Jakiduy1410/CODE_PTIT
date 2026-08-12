import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)

    t = int(next(it))
    for _ in range(t):
        s = next(it).decode(); k = int(next(it))

        dist = (26 + k) % 26

        for ch in s:
            if ch.islower():
                new = chr((ord(ch) - ord('a') + dist) % 26 + ord('a')) 
                print(new,end='')
            else:
                new = chr((ord(ch) - ord('A') + dist) % 26 + ord('A')) 
                print(new,end='')
        print()

main()