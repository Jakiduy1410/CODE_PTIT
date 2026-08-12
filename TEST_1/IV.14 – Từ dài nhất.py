import sys

def main():
    data = sys.stdin
    max_len = -1
    res = ''
    while True:
        line = data.readline()
        if not line:
            break
        
        s = line.split()
        for x in s:
            if len(x) > max_len:
                max_len = len(x)
                res = x
    print(res,max_len)

main()