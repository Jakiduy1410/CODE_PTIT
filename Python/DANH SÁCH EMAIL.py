import sys
import fileinput
def main():
    
    try:
        with open('CONTACT.in' , 'rb') as f:
            data = f
            s = data.read().decode().lower().split()
    except: 
        return
    mp = dict()
    for x in s:
        mp[x] = mp.get(x,0) + 1
    mp = sorted(mp.items(), key=lambda x: x[0])
    for x in mp:
        print(x[0])

main()