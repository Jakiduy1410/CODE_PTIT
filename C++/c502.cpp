#include<iostream>
#include<iomanip>
using namespace std;

struct ThiSinh {
    string hoTen;
    string Date;
    double Diem1, Diem2, Diem3, tong;
};

void nhap(ThiSinh &a)
{
    getline(cin, a.hoTen);
    getline(cin, a.Date);
    cin >> a.Diem1 >> a.Diem2 >> a.Diem3;
    a.tong = a.Diem1 + a.Diem2 + a.Diem3;
}

void in(ThiSinh a)
{
    cout << a.hoTen << " " << a.Date << " " << fixed << setprecision(1) << a.tong;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}