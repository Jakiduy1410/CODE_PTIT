#include <bits/stdc++.h>

using namespace std;

bool Check(vector<int> a, vector<int> b, int n)
{
 for(int i = 0 ; i < n ; i++)
 {
    if (a[i] != b[i] && a[n-i-1] != b[i])
    {
        return false;
    }
 }
 return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b = a;
        sort(b.begin(), b.end());
        if (Check(a, b, n))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
}