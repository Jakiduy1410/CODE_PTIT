#include <iostream>
using namespace std;

struct NhanVien
{
    string maNv;
    string hoTen, gioiTinh, Date, diaChi, maSoThue, ngayKiHopDong;
};

void nhap(NhanVien &a)
{
    a.maNv = "00001";
    getline(cin, a.hoTen);
    getline(cin, a.gioiTinh);
    getline(cin, a.Date);
    getline(cin, a.diaChi);
    getline(cin, a.maSoThue);
    getline(cin, a.ngayKiHopDong);
}

void in(NhanVien a)
{
    cout << a.maNv << " "
         << a.hoTen << " "
         << a.gioiTinh << " "
         << a.Date << " "
         << a.diaChi << " "
         << a.maSoThue << " "
         << a.ngayKiHopDong;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}