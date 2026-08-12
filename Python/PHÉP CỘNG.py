s = input()
a,b,c,d = s[0],s[2],s[4],s[8]

a = int(a)
c = int(c)
d = int(d)

if b == '+' and a + c == d:
    print("YES")
elif b == '-' and a - c == d:
    print("YES")
elif b == '*' and a * c == d:
    print("YES")
elif b == '/' and a // c == d:
    print("YES")
else:
    print("NO")
