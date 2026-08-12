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
        long long tmp = 0;
        long long res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int d = s[i] - '0';

            tmp = tmp * 10 + d * (i + 1);
            res += tmp;
        }
        cout << res << endl;
    }

    return 0;
}