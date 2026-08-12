import sys

def main():
    data = sys.stdin.buffer
    s = data.readline().decode().strip()
    st = set()

    for i in range(0,len(s),2):
        tmp = s[i:i+2]
        tmp = int(tmp)
        if tmp >= 10:
            st.add(s[i:i+2])
    st = sorted(st)
    print(*st)

main()