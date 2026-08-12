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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long res = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            long long target = a[i] + k;
            int pos = lower_bound(a.begin(), a.end(), target) - a.begin();
            res += (pos - 1 - i);
        }
        cout << res << endl;
    }

    return 0;
}