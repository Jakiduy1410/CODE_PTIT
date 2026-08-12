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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> dp = a;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                {
                    dp[i] = max(dp[i], dp[j] + a[i]);
                }
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}