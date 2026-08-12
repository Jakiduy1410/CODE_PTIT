#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<vector<string>> res;
vector<string> tmp;

void Try(int i, int sum)
{
    if (sum == 0)
    {
        res.push_back(tmp);
        return;
    }
    if (sum < 0 || i == n)
    {
        return;
    }

    tmp.push_back(to_string(a[i]));
    Try(i, sum - a[i]);
    tmp.pop_back();

    Try(i + 1, sum);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a.resize(n);
        res.clear();
        tmp.clear();
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        Try(0, k);
        if (res.empty())
        {
            cout << -1;
        }
        else
        {
            cout << res.size() <<" ";
            for (auto i : res)
            {
                cout << "{";
                for (int j = 0; j < i.size(); j++)
                {
                    if (j > 0 && j < i.size())
                    {
                        cout << " ";
                    }
                    cout << i[j];
                }
                cout << "} ";
            }
        }
        cout << endl;
    }

    return 0;
}