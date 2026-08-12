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
        vector<long long> dp(n+1,0);
        dp[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = max(0 , i - k) ; j < i ; j++)
            {
                dp[i] = (dp[i] + dp[j]) % MOD;
            }
        }
        cout << dp[n] << endl;
    }
       
    return 0;
}