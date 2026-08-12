import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        s = data.readline().decode().strip()
        print('YES' if s[0:2] == s[-2::] else 'NO')
    
main()