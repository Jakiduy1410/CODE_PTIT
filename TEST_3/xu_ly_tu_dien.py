import sys
import re
def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    for _ in range(n):
        mp = {}
        s = data.readline().decode().strip()
        s = s.replace('{','').replace('}','')
        s = s.split()

        even = []
        tong = 0
        chuoi = 0

        for i in range(0,len(s),2):
            ma = re.sub(r'[^A-Z0-9a-z]','',s[i])
            val = re.sub(r'[^A-Z0-9a-z]','',s[i+1])
            mp[ma] = val

            if val.isdigit():
                if int(val) % 2 == 0 or int(val) == 0:
                    even.append(ma)
                tong += int(val)
            elif val != '':
                chuoi  += 1
        print((even,tong,chuoi))


       

main()