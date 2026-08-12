#include <iostream>
using namespace std;

struct PhanSo
{
    long long x;
    long long y;
};

void nhap(PhanSo &p)
{
    cin >> p.x >> p.y;
}

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void rutgon(PhanSo &p) {
    long long g = gcd(p.x, p.y);
    p.x /= g;
    p.y /= g;
}


void in(PhanSo p) {
    cout << p.x << "/" << p.y;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}