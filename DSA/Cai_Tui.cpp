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
        int kg, n;
        cin >> n >> kg;
        vector<int> a(n + 1), c(n + 1);
        for (int i = 1 ; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];
        vector<int> dp(kg + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            
            for (int tmp = kg; tmp >= a[i]; tmp--)
            {
                dp[tmp] = max(dp[tmp], dp[tmp - a[i]] + c[i]);
            }
        }
        cout << dp[kg] << endl;
    }

    return 0;
}