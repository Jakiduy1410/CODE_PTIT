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
        string s;
        cin >> s;
        int n = s.size();
        bool dp[1001][1001];
        memset(dp, false, sizeof dp);
        int res = 1;
        for (int i = 0; i < n; i++)
            dp[i][i] = true;

        for (int len = 2; len <= n; len++)
        {
            for (int i = 0; i < n - len + 1; i++)
            {
                int j = i + len - 1;

                if (len == 2)
                {
                    if (s[i] == s[j])
                    {
                        dp[i][j] = true;
                    }
                }
                else
                {
                    if (dp[i + 1][j - 1] == true && s[i] == s[j])
                    {
                        dp[i][j] = true;
                    }
                }

                if (dp[i][j])
                {
                    res = max(res, len);
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}