
def main():
    s = input()
    rem = len(s) % 3
    b = 3 - rem
    if b != 0:
        s = ('0' *b) + s
    for i in range(0,len(s),3):
        tmp = s[i:i+3]
        print(str(int(tmp,2)) , end="")

main()