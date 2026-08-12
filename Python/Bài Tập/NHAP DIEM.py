
def main():
    name = input("Nhap ten thi sinh: ")
    diem_th = float(input("Nhap diem thuc hanh: "))
    diem_kt = float(input("Nhap diem ket thuc hoc phan: "))
    diem_hp = (diem_th + diem_kt) / 2
    print("Ten:",name)
    print("Diem:",diem_th,diem_kt,diem_hp)

main()