#include<iostream>
using namespace std;

struct PhanSo
{
    long long x;
    long long y;
};

void nhap(PhanSo &a)
{
    cin >> a.x >> a.y;
}

long long gcd(long long a, long long b)
{
    while (b != 0 )
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a,b);
}

PhanSo tong (PhanSo &p, PhanSo &q)
{
  long long g = lcm(p.y,q.y);
  long long d1 = g / p.y; 
  long long d2 = g / q.y;
  long long sum = d1 * p.x + d2 * q.x;
  long long res = gcd(g , sum);
  PhanSo result;
  result.x = sum / res;
  result.y = g / res;
  return result;
  
}

void in(PhanSo t)
{
    cout << t.x << "/" << t.y;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
