
s1 = input().strip()
s2 = input().strip()
p = int(input().strip())

idx = p - 1

ket_qua = s1[:idx] + s2 + s1[idx:]

print(ket_qua)