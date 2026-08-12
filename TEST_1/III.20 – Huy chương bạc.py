import sys

def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    
    n = int(data[0])
    scores = [int(x) for x in data[1:n+1]]
    
    top_scores = sorted(list(set(scores)), reverse=True)
    
    print(f"Silver = {top_scores[1]}")

if __name__ == '__main__':
    solve()