#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    bool stop = false;

    int k = 1;
    int res;
    while (!stop)
    {
        int tes = k;

        int cur_sum = 0;
        cur_sum += tes;
        int target = a[0] / tes;
        bool check = true;
        for (int j = 1; j < a.size(); j++)
        {
            bool ok = true;
            while (a[j] / tes > target)
                tes++;
            while (a[j] / tes < target)
            {
                ok = false;
                check = false;
                break;
            }
            if (ok)
            {
                cur_sum += tes;
            }
            else
                break;

            if (j == a.size() - 1)
            {
                res = cur_sum;
                check = true;
                break;
            }
        }

        if (!check)
        {
            k++;
        }
        else
            stop = true;
    }
    cout << res << endl;
    return 0;
}