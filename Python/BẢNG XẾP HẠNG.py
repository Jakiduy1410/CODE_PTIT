
class Rank:
    def __init__(self,name,ac,sub):
        self.name = name
        self.ac = ac
        self.sub = sub
    


def main():
    n = int(input())
    arr = []
    for i in range(n):
        name = input()
        ac,sub = map(int,input().split())
        arr.append(Rank(name,ac,sub))

    arr.sort(key=lambda x:(-x.ac,x.sub,x.name))

    for x in arr:
        print(x.name,x.ac,x.sub)




main()