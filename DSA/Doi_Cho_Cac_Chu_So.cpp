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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (k == 0)
            {
                break;
            }
            char cur = s[i];
            for (int j = i + 1; j < n; j++)
            {
                if (cur < s[j])
                {
                    cur = s[j];
                }
            }
            if (cur != s[i])
            {
                int pos = -1;
                for (int j = n - 1; j >= i; j--)
                {
                    if (cur == s[j])
                    {
                        pos = j;
                        break;
                    }
                }
                if (pos != -1)
                {
                    swap(s[i], s[pos]);
                    k--;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}