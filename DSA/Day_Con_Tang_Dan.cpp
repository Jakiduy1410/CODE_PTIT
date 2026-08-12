#include <bits/stdc++.h>
using namespace std;

int n, k = 2;
vector<string> res;
vector<int> a, b;

void Try(int i, int x, int size)
{
    for (int j = x; j < n; j++)
    {
        b.push_back(a[j]);
        if (b.size() > 1 && b.back() < b[b.size() - 2])
        {
            b.pop_back();
            continue;
        }

        if (i == k)
        {
            string temp;
            for (int i = 0; i < b.size(); i++)
            {
                if (i > 0)
                {
                    temp += " ";
                }
                temp += to_string(b[i]);
            }
            res.push_back(temp);
        }
        else
        {
            Try(i + 1, j + 1, k);
        }
        b.pop_back();
    }
}

int main()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k <= n)
    {
        Try(1, 0, k);
        k++;
    }
    sort(res.begin(), res.end());
    for (auto i : res)
        cout << i << endl;
}