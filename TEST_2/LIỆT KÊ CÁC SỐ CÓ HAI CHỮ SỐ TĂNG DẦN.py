
def main():
    s = input()
    a = []
    for i in range(0,len(s),2):
        tmp = s[i:i+2]
        if len(tmp) != 2:
            break
        a.append(tmp)
    a = set(a)
    a = sorted(a,key=lambda x: int(x))
    print(' '.join(a))
    

main()