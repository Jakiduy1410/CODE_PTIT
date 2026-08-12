#include <bits/stdc++.h>

using namespace std;

int n;
bool check[1001];
vector<int> a, b;

void Try(int i)
{
    if (i > n)
    {
        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }
    else
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (!check[j])
            {
                b.push_back(a[j]);
                check[j] = true;
                Try(i + 1);
                check[j] = false;
                b.pop_back();
            }
        }
    }
}

int main()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    Try(1);
}