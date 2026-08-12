def main():
    n = int(input())
    a = list(map(float, input().split()))

    min_num = a.count(min(a))
    max_num = a.count(max(a))

    tb = sum(i for i in a)
    res = tb - (min(a)*min_num + max(a)*max_num)
    res /= (len(a) -(min_num+max_num))
    print(f"{res:.2f}")

if __name__ == "__main__":
    main()
