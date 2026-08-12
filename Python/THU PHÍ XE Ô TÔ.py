import sys

def bill(car,seat):
    if car == "Xe_con":
        if seat == "5":
            return 10000
        else:
            return 15000
    elif car == "Xe_tai":
        return 20000
    else:
        if seat == "29":
            return 50000
        else:
            return 70000

def main():
    data = sys.stdin.buffer
    n = int(data.readline())
    res = []
    mp = {}
    for _ in range(n):
        line = data.readline().split()
        bks = line[0].decode("utf-8")
        car = line[1].decode("utf-8")
        seat = line[2].decode("utf-8")
        status = line[3].decode("utf-8")
        date = line[4].decode("utf-8")
        if status == "IN":
            if date not in mp:
                mp[date] = mp.get(date,0) + bill(car,seat)
            else:
                mp[date] += bill(car,seat)
    for date in sorted(mp.keys()):
        print(f"{date}: {mp[date]}")

main()