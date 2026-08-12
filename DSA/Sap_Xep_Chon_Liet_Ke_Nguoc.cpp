#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        swap(a[pos], a[i]);
        string tmp = "Buoc " + to_string(cnt) + ": ";
        for (auto i : a)
            tmp += to_string(i) + " ";
        res.push_back(tmp);
        cnt++;
    }
    reverse(res.begin(), res.end());
    for (auto i : res)
        cout << i << endl;

    return 0;
}