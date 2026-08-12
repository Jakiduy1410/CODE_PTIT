def main():
    s = input()
    mod = len(s) % 3
    if mod != 0:
        s = ('0' * (3 - mod)) + s
    #print(s)
    res = ''
    for i in range(0,len(s),3):
        tmp = s[i:i+3]
        res += str(int(tmp,2))
    print(res)

main()