def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))

        st = []
        for i in range(n):
            while st and a[st[-1]] <= a[i]:
                st.pop()

            if not st:
                print(i + 1, end=" ")
            else:
                print(i - st[-1], end=" ")

            st.append(i)
        print()

main()
