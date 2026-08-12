#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200000;
vector<string> mix;
string tmp;

void Try(int size, int sum)
{
    if (tmp.size() >= 200000)
        return;

    if (tmp.size() == size)
    {
        if (sum == 10)
        {
            mix.push_back(tmp);
        }
    }
    int left = size - tmp.size();
    int missing = 10 - sum;

    if (left * 9 < missing)
        return;
    if (missing < 0)
        return;

    int start = (tmp.empty()) ? 1 : 0;
    for (int i = start; i <= 9; i++)
    {
        tmp.push_back(i + '0');
        Try(size, sum + i);
        tmp.pop_back();
    }
}

void Pre()
{
    for (int len = 2; len <= 12; len++)
    {
        Try(len, 0);
        if(mix.size() > 200000) return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Pre();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << mix[n-1] << endl;
    }

    return 0;
}