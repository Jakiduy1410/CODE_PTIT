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
        vector<int> left(n), right(n);
        left[0] = 1;
        right[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                left[i] = left[i - 1] + 1;
            }
            else
                left[i] = 1;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                right[i] = right[i + 1] + 1;
            }
            else
                right[i] = 1;
        }
        int maxlen = 0;
        for (int i = 0; i < n; i++)
        {
            int len = 0;
            if (right[i] != 1 && left[i] != 1)
            {
                len = right[i] + left[i] - 1;
            }
            else if(left[i] != 1)
            {
                len = left[i];
            }
            else if (right[i] != 1)
            {
                len = right[i];
            }
            maxlen = max(maxlen , len);
        }
        cout << maxlen << endl;
        // for(auto i : left) cout << i << " ";
        // cout << endl;
        // for(auto i : right) cout << i << " ";
        // cout << endl;
    }

    return 0;
}