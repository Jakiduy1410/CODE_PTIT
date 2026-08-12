import sys

def random(s):
    r = []
    if len(s) == 2:
        if s == "??":
            for i in range(10, 100):      
                r.append(i)
        elif s[0] == '?' and s[1] != '?':
            for i in range(1, 10):          
                r.append(int(str(i) + s[1]))
        elif s[0] != '?' and s[1] == '?':
            for i in range(0, 10):
                r.append(int(s[0] + str(i)))
        else:
            r.append(int(s))
        return r
    elif len(s) == 1:
        if s == '?':
            return ["+", "-", "*", "/"]
        else:
            return s
    else:
        r.append(int(s))
        return r

def ok(a, op, b, d):
    if op == '+':
        return a + b == d
    if op == '-':
        return a - b == d
    if op == '*':
        return a * b == d
    
    if b == 0:
        return False
    return a % b == 0 and a // b == d

def main():
    data = sys.stdin.buffer
    t = int(data.readline())
    out = []
    for _ in range(t):
        s = data.readline().split()
        a = s[0].decode()
        op = s[1].decode()
        b = s[2].decode()
        d = s[4].decode()

        num_1 = random(a)
        sign = random(op)
        num_2 = random(b)
        res = random(d)

        found = False
        ans = None

        for x in num_1:
            for sg in sign:
                for y in num_2:
                    for z in res:
                        if ok(x, sg, y, z):
                            found = True
                            ans = (x, sg, y, z)
                            break
                    if found: break
                if found: break
            if found: break

        if found:
            x, sg, y, z = ans
            out.append(f"{x:02d} {sg} {y:02d} = {z:02d}")
        else:
            out.append("WRONG PROBLEM!")

    sys.stdout.write("\n".join(out))

main()
