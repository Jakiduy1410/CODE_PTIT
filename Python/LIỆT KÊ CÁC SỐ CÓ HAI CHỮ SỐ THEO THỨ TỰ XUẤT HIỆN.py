import sys

def main():
    data = sys.stdin.buffer
    s = data.readline().decode().strip()
    st = {}

    for i in range(0,len(s),2):
        tmp = s[i:i+2]
        tmp = int(tmp)
        if tmp >= 10:
            st[tmp] = st.get(tmp,0) + 1
    res = st.keys()
    print(*res)

main()