#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n+1 , vector<int>(m+1));
        vector<vector<int>> dp(n+1 , vector<int>(m+1,0));
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                
                if (a[i][j] == 1)
                {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                res = max(res , dp[i][j]);
            }
            
        }
        cout << res << endl;
    }
       
    return 0;
}