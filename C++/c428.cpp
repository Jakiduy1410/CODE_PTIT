#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        vector<long long> c;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);

        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }
        sort(c.begin(),c.end());
        for(auto i : c)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}