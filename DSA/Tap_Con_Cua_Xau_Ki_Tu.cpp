#include <bits/stdc++.h>
using namespace std;
int n;
vector<char> a;
string tmp;
set<string> res;

void Try(int i)
{
    if (i == n)
    {
        if (!tmp.empty())
        {
            res.insert(tmp);
        }

        return;
    }

    tmp += a[i];
    Try(i + 1);

    tmp.pop_back();
    Try(i + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        tmp.clear();
        res.clear();

        Try(0);
        for (auto i : res)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}