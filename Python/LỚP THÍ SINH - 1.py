import sys

def main():
    inp = sys.stdin.buffer

    name = inp.readline().decode().strip()  
    bday = inp.readline().decode().strip()   
    a = float(inp.readline())
    b = float(inp.readline())
    c = float(inp.readline())

    print(name,bday, f"{a+b+c:.1f}")
    

main()
