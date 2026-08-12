#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> dp(10,1);
        for(int i = 2 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= 9 ; j++)
            {
                dp[j] = (dp[j] + dp[j-1]) % MOD;
            }
        }

        long long ans = 0 ;
        for(auto i : dp) ans = (ans+i) % MOD;
        cout << ans << endl;

    }
       
    return 0;
}