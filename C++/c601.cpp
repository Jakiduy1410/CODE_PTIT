#include<iostream>
#include<iomanip>
using namespace std;

struct SinhVien
{
    string hoTen, lop, ngaySinh;
    float Gpa;

    void ChuanHoa(string &ns)
    {
        if (ns.size() >= 6)
        {
           if (ns[1] == '/')
           {
            ns.insert(0,"0");
           }
           if(ns[4] == '/')
           {
            ns.insert(3,"0");
           }
        }
        
    }
    void nhap()
    {
        getline(cin, hoTen);
        cin >> lop >> ngaySinh >> Gpa;
        ChuanHoa(ngaySinh);
    }

    void xuat()
    {
        cout << "B20DCCN001 " << hoTen << " " << lop << " " << ngaySinh << " " << fixed << setprecision(2) << Gpa << endl;
    }
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}