import sys

def solve(n):
    nums = [0] * 10

    p,tail,curr = 1,0,n
    while curr > 0:
        digit = curr % 10
        curr //= 10


        for i in range(10):
            nums[i] += (curr * p)
        
        for i in range(digit):
            nums[i] += (p)

        nums[digit] += (1 + tail)
        nums[0] -= p

        tail += (p * digit)
        p *= 10
    return nums


        


def main():
    data = sys.stdin.buffer.read().split()
    it = iter(data)
    t = int(next(it))
    for _ in range(t):
        a,b = next(it).decode(), next(it).decode()
        
        sum_a = solve(int(a) - 1)
        sum_b = solve(int(b))
        
        for i in range(10):
            print(sum_b[i] - sum_a[i], end=" ")
        print()
       
        
            
main()