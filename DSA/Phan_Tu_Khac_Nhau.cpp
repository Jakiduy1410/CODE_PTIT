#include <bits/stdc++.h>
using namespace std;

int Check(vector<int> a , vector<int> b)
{
    for(int i = 0 ; i < a.size() ; i++)
    {
        if (a[i] != b[i])
        {
            return i+1;
        }
        
    }
}

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
        vector<int> a(n), b(n - 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        cout << Check(a,b) << endl;
    }

    return 0;
}