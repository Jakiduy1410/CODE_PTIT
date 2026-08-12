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
        int n, s;
        long long k;

        cin >> n >> s >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<long long> prefix(n + 2, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        long long target = prefix[s] - k;
        auto it = lower_bound(prefix.begin(), prefix.end(), target);
        int l = it - prefix.begin();
        if (l > s)
            l = s;
        cout << l + 1 << endl;
    }

    return 0;
}