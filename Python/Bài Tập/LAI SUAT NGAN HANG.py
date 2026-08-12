

def main():
    x = float(input())
    rate = 6 / 1000
    pos = 0
    while pos < 3:
        tmp = x * (rate*6)
        x += tmp
        pos += 1
    print(f"{x:.3f}")

if __name__ == "__main__":
    main()