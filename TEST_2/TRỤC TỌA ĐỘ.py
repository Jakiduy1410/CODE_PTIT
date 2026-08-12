import sys

def main():
    input = sys.stdin.read
    data = input().split()
    if not data: return 
    index = 0
    t = int(data[index])
    index += 1
    for _ in range(t):
        n = int(data[index])
        index += 1
        segments = []
        for i in range(n):
            x1 = int(data[index])
            x2 = int(data[index + 1])
            index += 2
            segments.append((min(x1, x2), max(x1, x2))) 
        segments.sort(key=lambda x: x[1])
        count = 0
        last_end = float('-inf') 
        for start, end in segments:
            if start >= last_end: 
                count += 1
                last_end = end
        print(count)

if __name__ == "__main__":
    main()