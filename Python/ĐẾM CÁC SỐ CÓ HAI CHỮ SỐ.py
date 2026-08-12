import sys

def main():
    data = sys.stdin.buffer
    n = data.readline().decode()
    mp = {}
    for i in range(0,len(n),2):
        tmp = n[i:i+2]
        tmp = int(tmp)
        if tmp >= 10:
            mp[tmp] = mp.get(tmp,0) + 1
    
    for key,val in mp.items():
        print(key,val,end="\n")


main()