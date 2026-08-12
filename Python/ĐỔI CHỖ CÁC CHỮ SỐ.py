import sys


def solve(n,size):
    n = list(n)
    i = size - 2
    while i >= 0 and n[i] <= n[i+1]:
        i -= 1
    if i < 0:
        return -1
    tag = -1
    pos = i+1
    for j in range(i+1,size):
        if tag < int(n[j]) and int(n[j]) < int(n[i]):
            tag = int(n[j])
            pos = j
    n[i] ,n[pos] = n[pos] , n[i]
    if n[0] == '0':
        return -1
    return ''.join(n)

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        n = data.readline().decode().strip()
        size = len(n)
        print(solve(n,size))

main()