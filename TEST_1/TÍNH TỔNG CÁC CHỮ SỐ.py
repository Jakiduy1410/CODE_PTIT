import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        s = data.readline().decode().strip()
        num = ''
        res = 0
        mp = dict()
        for ch in s:
            if ch.isdigit():
                res += int(ch)
            else:
                mp[ch] = mp.get(ch,0) + 1
        ans = ''
        for key,val in sorted(mp.items()):
            ans += ''.join(str(key) for _ in range(val))
        print(ans + str(res))

main()
