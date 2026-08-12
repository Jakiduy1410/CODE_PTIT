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

        vector<int> dp(n+1,n);
        dp[0] = 0;

        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j*j <= i ; j++)
            {
                dp[i] = min(dp[i] , dp[i - (j*j)] + 1);
            }
        }
        cout << dp[n] << endl;
    }
       
    return 0;
}