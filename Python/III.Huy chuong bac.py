import sys

def solve():
    data = sys.stdin.buffer
    if not data:
        return
    scores = []
    n = int(data.readline())
    for _ in range(n):
        scores.append((int(data.readline())))
    mx = -1
    mx2 = -2
    for i in range(0,len(scores)):
        if scores[i] > mx:
            mx2 = mx
            mx = scores[i]
        if scores[i] < mx and scores[i] > mx2:
            mx2 = scores[i]
    
    print(f"Silver = {mx2}")

if __name__ == '__main__':
    solve()