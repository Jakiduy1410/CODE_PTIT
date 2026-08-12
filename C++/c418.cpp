#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> c = a;
        c.insert(c.end(), b.begin(), b.end());
        sort(c.begin(), c.end());

        int Hop = unique(c.begin(), c.end()) - c.begin();
        for (int i = 0; i < Hop; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
        vector<int> Giao;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(Giao));

                for (int x : Giao)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}