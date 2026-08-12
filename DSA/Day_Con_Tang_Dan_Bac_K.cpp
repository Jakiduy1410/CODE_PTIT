#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a, b;
int cnt = 0;

void Try(int i, int start)
{
    for (int j = start; j < a.size(); j++)
    {
        if (b.empty() || b.back() < a[j])
        {
            b.push_back(a[j]);

            if (i == k)
            {
                cnt++;
            }
            else
                Try(i + 1, j + 1);
            b.pop_back();
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Try(1, 0);
    cout << cnt << endl;
    return 0;
}