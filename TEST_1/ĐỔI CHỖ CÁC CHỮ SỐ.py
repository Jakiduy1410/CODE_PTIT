import sys

def solve(n):
    n = list(n)
    i = len(n) - 2
    while i >= 0 and n[i] <= n[i+1]:
        i -= 1
    if i < 0:
        return "-1"
    
    pos = -1
    tag = -1
    for j in range(i+1, len(n)):
        if n[j] < n[i] and int(n[j]) > tag:
            pos = j
            tag = int(n[j])
            
    n[i], n[pos] = n[pos], n[i]
    n[i+1:] = sorted(n[i+1:], reverse=True)
    
    ans = "".join(n)
    if ans[0] == '0':
        return "-1"
    return ans

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        n = next(it).decode()
        print(solve(n))

main()