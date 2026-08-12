#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct SinhVien
{
    string maSv, hoTen, maLop, ngaySinh;
    float GPA;


};

void ChuanHoa(string &a)
{
    if (a.length() >= 6)
    {
        if (a[1] == '/')
        {
            a.insert(0, "0");
        }
        if(a[4] == '/')
        {
            a.insert(3, "0");
        }
        
    }
    
}

void nhapThongTinSV(SinhVien &a)
{
  getline(cin, a.hoTen);
  getline(cin, a.maLop);
  getline(cin, a.ngaySinh);
  ChuanHoa(a.ngaySinh);
  cin >> a.GPA;

}

void inThongTinSV(SinhVien a)
{
 cout << "N20DCCN001" << " " << a.hoTen << " " <<  a.maLop << " " << a.ngaySinh <<" " << fixed << setprecision(2) << a.GPA; 
}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}