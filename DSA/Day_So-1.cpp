#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> tri;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        tri.push_back(a);

        cout << "[";
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n)
            {
                cout << " ";
            }
            cout << a[i];
        }
        cout << "]";
        cout << endl;

        while (n != 1)
        {
            cout << "[";
            for (int i = 0; i < n - 1; i++)
            {
                if (i > 0 && i < n - 1)
                {
                    cout << " ";
                }

                a[i] = a[i] + a[i + 1];
                cout << a[i];
            }
            cout << "]";
            cout << endl;
            n--;
        }
    }
}