import sys

def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    n = int(next(it))
    a = [int(next(it)) for _ in range(n)]
    st = []
    cnt = 0
    for i in range(n):
        same = 1
        while len(st) > 0 and st[-1][0] < a[i]:
            cnt += st[-1][1]
            st.pop()
        
        if len(st) > 0:
            if st[-1][0] == a[i]:
                cnt += st[-1][1]
                same = (st[-1][1] + 1)
                st.pop()
                if len(st) > 0:
                    cnt += 1
            else:
                cnt += 1

        st.append((a[i],same))
    print(cnt)

main()
    
