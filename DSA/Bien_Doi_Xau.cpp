#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = 0;
                    continue;
                }
                if (i == 0 && j >= 1)
                {
                    dp[i][j] = dp[i][j - 1] + 1;
                }
                else if (j == 0 && i >= 1)
                {
                    dp[i][j] = dp[i - 1][j] + 1;
                }
                else
                {
                    if (a[i - 1] == b[j - 1])
                    {
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                    else
                    {
                        dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    }
                }
            }
        }
        cout << dp[n][m] << endl;
    }

    return 0;
}