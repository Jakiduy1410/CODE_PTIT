import sys

def main():
    data = sys.stdin.buffer
    s = data.readline().decode().split()
    for x in s:
        print(x)

main()