def hanoi(n, src, aux, dst, out):
    if n == 1:
        out.append(f"{src} -> {dst}")
        return
    hanoi(n-1, src, dst, aux, out)
    out.append(f"{src} -> {dst}")
    hanoi(n-1, aux, src, dst, out)

def main():
    n = int(input())
    out = []
    hanoi(n, "A", "B", "C", out)
    print("\n".join(out))

if __name__ == "__main__":
    main()
