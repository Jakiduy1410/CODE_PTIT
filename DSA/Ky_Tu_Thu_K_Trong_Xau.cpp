#include <bits/stdc++.h>
using namespace std;

char Check(int n,int k)
{
    long long mid = 1LL * 1 * (1 << n);
    mid /= 2;
    if (k == mid)
    {
        return 'A' + n - 1;
    }
    if (k > mid)
    {
        return Check(n-1,k- mid);
    }
    else return Check(n-1,k);
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        cout << Check(n,k) << endl;
    }
    
    return 0;
}