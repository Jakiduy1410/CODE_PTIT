#include<bits/stdc++.h>

using namespace std;

class NhanVien
{
private:
    string manv, ten, sex, ngaySinh, diaChi, thue, ngayKi;
public:
    NhanVien()
    {
        manv = ten = sex = ngaySinh = diaChi = thue = ngayKi = "";
    }
    friend istream &operator>>(istream &is, NhanVien &a)
    {
        a.manv = "00001";
        getline(is, a.ten);
        getline(is, a.sex);
        getline(is, a.ngaySinh);
        getline(is, a.diaChi);
        getline(is, a.thue);
        getline(is, a.ngayKi);
        return is;
    }
    friend ostream &operator>>(ostream &os, const NhanVien &a)
    {
        os << a.manv << " " << a.ten << " " << a.sex << " " << a.ngaySinh << " "
           << a.diaChi << " " << a.thue << " " << a.ngayKi << endl;
        return os;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}