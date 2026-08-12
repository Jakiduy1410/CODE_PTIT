import sys

class DanhBa:
    def __init__(self, name, sdt, date):
        self.name = name
        self.sdt = sdt
        self.date = date

def main():
    data = sys.stdin.buffer
    a = []
    cur_date = ""

    while True:
        line = data.readline()
        if not line:
            break
        line = line.decode("utf-8", errors="ignore").strip()
        if not line:
            continue

        if line.startswith("Ngay "):
            cur_date = line[5:]
            continue
        name = line
        raw_sdt = data.readline()
        if not raw_sdt:
            break
        sdt = raw_sdt.decode("utf-8", errors="ignore").strip()

        a.append(DanhBa(name, sdt, cur_date))

    a.sort(key=lambda x: x.name)

    for i in a:
        print(f"{i.name}: {i.sdt} {i.date}")

if __name__ == "__main__":
    main()
