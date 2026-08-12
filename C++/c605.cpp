#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo(long long t, long long m)
    {
        tu = t;
        mau = m;
    }
    friend istream &operator>>(istream &is, PhanSo &p)
    {
        is >> p.tu >> p.mau;
        return is;
    }
    void rutgon()
    {
        long long gcd = __gcd(tu, mau);
        tu /= gcd;
        mau /= gcd;
    }

    friend ostream &operator<<(ostream &os, PhanSo p)
    {
        os << p.tu << "/" << p.mau;
        return os;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}