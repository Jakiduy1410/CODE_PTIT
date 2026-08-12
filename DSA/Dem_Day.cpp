#include <bits/stdc++.h>
using namespace std;

const int MOD = 123456789;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n--;
        //n %= MOD;

        long long res = 1;
        long long pow = 2;
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                res = (res * pow) % MOD;
            }
            pow = (pow * pow) % MOD;
            n /= 2;
            
        }
        cout << res << endl;
        

    }
    
    
    return 0;
}