#include <iostream>
using namespace std;

struct NhanVien
{
    string maNv, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKiHopDong;
};

void nhap(NhanVien &ds)
{
    static bool first = true;
    if (first)
    {
        cin.ignore(); 
        first = false;
    }
    getline(cin, ds.hoTen);
    getline(cin, ds.gioiTinh);
    getline(cin, ds.ngaySinh);
    getline(cin, ds.diaChi);
    getline(cin, ds.maSoThue);
    getline(cin, ds.ngayKiHopDong);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
        {
            ds[i].maNv = "0000" + to_string(i + 1);
        }
        else
        {
            ds[i].maNv = "000" + to_string(i + 1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].maNv << " " << ds[i].hoTen << " " << ds[i].gioiTinh << " "
             << ds[i].ngaySinh << " " << ds[i].diaChi << " " << ds[i].maSoThue << " "
             << ds[i].ngayKiHopDong << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}