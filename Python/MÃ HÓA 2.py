char = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    parts = input().split()
    if parts[0] == '0':
        break
    num = int(parts[0])
    tmp = parts[1]
    res = ""
    for i, ch in enumerate(tmp, start=1): 
        pos = char.find(ch)
        res += char[(pos+ num - 28) % 28]
    res = res[::-1]
    print(res)
