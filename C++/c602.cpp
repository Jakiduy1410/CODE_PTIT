#include <iostream>
#include<iomanip>
using namespace std;

class SinhVien
{
private:
    string msv, ten, lop, ngaySinh;
    float GPA;

public:
    SinhVien()
    {
        msv = ten = lop = ngaySinh = "";
        GPA = 0;
    }
    void chuanHoaNgaySinh()
    {
        if (ngaySinh[1] == '/')
            ngaySinh.insert(0, "0");
        if (ngaySinh[4] == '/')
            ngaySinh.insert(3, "0");
    }

    friend istream &operator>>(istream &is, SinhVien &a)
    {
        a.msv = "B20DCCN001";
        //is.ignore();
        getline(is, a.ten);
        is >> a.lop >> a.ngaySinh >> a.GPA;
        a.chuanHoaNgaySinh();
        return is;
    }
    friend ostream &operator<<(ostream &os, SinhVien a)
    {
        os << a.msv << " " 
        << a.ten << " " << 
        a.lop << " " << a.ngaySinh <<
        " " << fixed << setprecision(2) << a.GPA;
        return os;
    }
};


int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}