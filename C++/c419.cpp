#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n) , b(m), c;
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            c.push_back(a[i]);
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }

        vector<int> res;
        for(int x : b)
        {
            if (mp.find(x) != mp.end())
            {
                res.push_back(x);
            }
            
        }
        
        sort(c.begin(), c.end());
        int pos = unique(c.begin(), c.end()) - c.begin();
        for (int i = 0; i < pos; i++)
        {
            cout << c[i] << " ";
        }
        
        cout << endl;
        for(auto i : res)
        {
            cout << i << " ";
        }
        
        cout << endl;

        
    }
    
}