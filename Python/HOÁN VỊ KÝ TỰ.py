from itertools import permutations

def main():
    s = input()
    res = [ch for ch in s]  
    for ch in permutations(res, len(s)):
        print("".join(ch))
    
main()