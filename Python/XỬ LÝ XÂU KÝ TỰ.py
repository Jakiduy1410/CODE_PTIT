import sys

def main():
    data = sys.stdin.buffer
    line1 = data.readline().decode().split()
    line2 = data.readline().decode().split()

    line1 = [x.lower() for x in line1]
    line2 = [x.lower() for x in line2]

    sa = set(line1)
    sb = set(line2)

   
    hop = sorted(sa | sb)
    print(*hop)

    
    giao = sorted(sa & sb)
    print(*giao)

if __name__ == "__main__":
    main()
