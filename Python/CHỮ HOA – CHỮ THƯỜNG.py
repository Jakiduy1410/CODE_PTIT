def check(s):
    cnt_low,cnt_up = 0,0
    for ch in s:
        if ch.isupper():
            cnt_up += 1
        else:
            cnt_low += 1
    
    if cnt_up <= cnt_low:
        return s.lower()
    else:
        return s.upper()

s = input()
print(check(s))
