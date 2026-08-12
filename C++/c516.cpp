#include<bits/stdc++.h>
using namespace std;

struct SanPham
{
    string ten, nhom;
    double mua,ban, loinhuan;
    long long stt;

};

void nhap(SanPham &a, int n)
{
    a.stt = n+1;
    //cin.ignore();
    getline(cin, a.ten);
    getline(cin, a.nhom);
    cin >> a.mua >> a.ban;
    cin.ignore();
    a.loinhuan = a.ban - a.mua;

}

bool Cmp_LoiNhuan(const SanPham &a, const SanPham &b)
{
    return a.loinhuan > b.loinhuan;
}

void in(SanPham a)
{
    cout << a.stt << " " << a.ten
    << " " << a.nhom << " "
    << fixed << setprecision(2) << a.loinhuan << endl;
}

int main()
{
    SanPham a;
    int n;
    cin >> n;
    cin.ignore();
    vector<SanPham> arrSanPham(n);
    for (int i = 0; i < n; i++)
    {
        nhap(arrSanPham[i],i);
    }

    sort(arrSanPham.begin(), arrSanPham.end(),Cmp_LoiNhuan);
    
    for(auto i : arrSanPham)
    {
        in(i);
    }
}