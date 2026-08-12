import sys

def check(s):
    return s == s[::-1]

def main():
    try:
        with open('VANBAN.in', 'rb') as f:
            data = f
            s = data.read().decode().split()
    except:
        return
    mp = dict()
    max_len = 1
    for x in s:
        if check(x):
            if len(x) > max_len:
                max_len = len(x)
            mp[x] = mp.get(x,0) + 1
    #mp = sorted(mp.items() , key= lambda x: len(x[0]))
    for key,val in mp.items():
        if len(key) == max_len:
            print(key, val)
    

main()
    