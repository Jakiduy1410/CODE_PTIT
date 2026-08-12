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

        vector<int> tang(n + 1);
        for (int i = 0; i < n; i++)
        {
            tang[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    tang[i] = max(tang[i], tang[j] + a[i]);
                }
            }
        }

        vector<int> tang_nguoc(n + 1);
        for (int i = n - 1; i >= 0; i--)
        {
            tang_nguoc[i] = a[i];
            for (int j = n - 1; j > i; j--)
            {
                if (a[i] > a[j])
                {
                    tang_nguoc[i] = max(tang_nguoc[i], tang_nguoc[j] + a[i]);
                }
            }
        }
        long long res = 0;
        for(int i = 0 ; i < n ; i++)
        {
            res = max(res , 1LL*(tang[i]+tang_nguoc[i] - a[i]));
        }
        cout << res << endl;
    }
    return 0;
}