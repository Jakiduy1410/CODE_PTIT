import sys

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    for _ in range(t):
        s = data.readline().decode().strip()
        cnt = 1
        st = [()]
        index = [0] * len(s)
        for pos , ch in enumerate(s):
            if ch == '(':
                st.append((pos,cnt))
                index[pos] = cnt
                cnt += 1
            elif ch == ')':    
                res = st[-1]
                st.pop()
                index[pos] = res[1]
            else: 
                continue
        for x in index:
            if x != 0:
                print(x, end=" ")
        print()
                

main()