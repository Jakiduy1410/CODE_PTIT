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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n + m), b(m);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n; i < n + m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        cout << a[k - 1] << endl;
    }

    return 0;
}