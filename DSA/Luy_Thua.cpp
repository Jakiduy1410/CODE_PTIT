#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        n %= MOD;
        int res = 1;
        while (k > 0)
        {
            if (k % 2 == 1)
            {
                res =  (res * n ) % MOD;
            }
            n  = (n * n) % MOD;
            k /= 2;
        }
        cout << res % MOD << endl;
        
    }
    
    return 0;
}