def backtrack(pos: int, half: int, num: int, cur: str,res: list):
    if pos == half:
        tmp = cur + cur[::-1]
        if int(tmp) < num:
            res.append(tmp)
        return
    if pos == 0:
        for ch in('2','4','6','8'):
            backtrack(pos+1,half,num,cur + ch,res)
    else:
        for ch in('0','2','4','6','8'):
            backtrack(pos+1,half,num,cur + ch,res)
        


def main():
    t = int(input())
    for _ in range(t):
        a = input()
        len_a = len(a)
        res = []
        for half in(1,2,3):
            backtrack(0,half,int(a),"",res)
        print(" ".join(res))


if __name__ == "__main__":
    main()