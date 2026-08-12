

s = input()
s = s[::-1]
res = ""
pos = 0
while pos < len(s):
    tmp = s[pos:pos+3]
    res += (tmp + ",")
    pos += 3
res = res[::-1]
print(res[1::])