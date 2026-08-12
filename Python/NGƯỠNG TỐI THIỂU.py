import sys

def main():
    data = sys.stdin.buffer
    s = data.readline().decode().strip()
    k = data.readline().decode().strip()
    mp = {}
    ord = []
    for i in range(0,len(s),2):
        tmp = s[i:i+2]
        tmp = int(tmp)
        if tmp not in mp:
            mp[tmp] = mp.get(tmp,0) + 1
            ord.append(tmp)
        else:
            mp[tmp] += 1
    ord.sort()
    found = False
    for key in ord:
        if mp[key] >= int(k):
            print(f"{key} {mp[key]}")
            found = True
    
    if not found:
        print("NOT FOUND")

main()