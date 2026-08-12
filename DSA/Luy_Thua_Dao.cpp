#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long Resv(long long n)
{
    long long sum = 0;
    while (n > 0)
    {
        sum = (sum * 10) + (n%10);
        n/= 10;
    }
    return sum;
}

long long Pow(long long n , long long r)
{
   if(r == 1) return n;
   long long tmp = Pow(n,r/2);
   if (r % 2 == 1)
   {
    return tmp % MOD * tmp % MOD * n % MOD;
   }
   else return tmp%MOD*tmp%MOD;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long r = Resv(n);
        cout << Pow(n,r) % MOD;
        cout << endl;
        
    }
       
    return 0;
}