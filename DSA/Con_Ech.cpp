#include <bits/stdc++.h>
using namespace std;

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
            for(int j = max(0, i - 3) ; j < i ; j++)
            {
                dp[i] = dp[i] + dp[j];
            }
        }
        cout << dp[n] << endl;
    }
    
    return 0;
}