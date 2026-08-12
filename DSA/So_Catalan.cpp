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
        int n;
        cin >> n; 
        vector<long long> dp(n+1, 0);
        dp[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                dp[i] += (dp[j]*dp[i-j-1]) % MOD;
                dp[i] %= MOD;
            }
        }
        cout << dp[n] << endl;
    }
       
    return 0;
}