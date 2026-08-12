#include <bits/stdc++.h>
using namespace std;

class NhanVien
{
private:
    string manv, ten, gioiTinh, ngaySinh, diaChi, thue, hopDong;

public:
    NhanVien()
    {
        manv = ten = gioiTinh = ngaySinh = diaChi = thue = hopDong = "";
    }
    static string SinhMaNV(int n)
    {
        string res;
        if(n < 10)
        {
            res += "0000";
        }
        if(n >= 10)
        {
            res += "000";
        }
        res += to_string(n);
        return res;
    }

    friend istream &operator>>(istream &is, NhanVien &a)
    {
        is.ignore();
        static int stt = 1;
        a.manv = SinhMaNV(stt++);
        getline(is, a.ten);
        is >> a.gioiTinh >> a.ngaySinh;
        is.ignore();
        getline(is, a.diaChi);
        is >> a.thue >> a.hopDong;
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien a)
    {
        os << a.manv << " " << 
        a.ten << " " << a.gioiTinh << " " 
        << a.ngaySinh << " " << 
        a.diaChi << " " << a.thue << " " << a.hopDong << endl;
        return os;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}