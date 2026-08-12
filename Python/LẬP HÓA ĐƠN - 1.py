class bill:
    def __init__(self, code, name, old, new):
        self.name = name
        self.code = "KH" + str(code).zfill(2)
        m = new - old
        if m > 100: self.bill = (m-100)*200*1.05 + 50*250*1.05
        elif m > 50: self.bill = ((m-50)*150  + 50*100)*1.03
        else: self.bill = m * 100 * 1.02
    
a = []
for t in range(int(input())):
    a.append(bill(t+1, input(), int(input()), int(input())))
a.sort(key = lambda x : (-x.bill, x.code))

for i in a:
    print(i.code, i.name, f'{i.bill:.0f}')