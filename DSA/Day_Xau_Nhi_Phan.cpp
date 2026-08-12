#include <bits/stdc++.h>
using namespace std;

long long f[93];

void fib()
{
    f[1] = f[2] = 1;
    for(int i = 3 ; i <= 93 ; i++)
    {
        f[i] = f[i-2] + f[i-1];
    }
}

int Check(long long n,long long k)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (k <= f[n-2])
    {
        return Check(n-2,k);
    }
    else return Check(n-1, k-f[n-2]);
    
    
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fib();
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        cout << Check(n,k) << endl;
    }
    
    return 0;
}