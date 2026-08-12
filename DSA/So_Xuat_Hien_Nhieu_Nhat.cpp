#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        bool found = false;
        for(auto &[x,y] : mp)
        {
            if (y > (n/2))
            {
                cout << x << endl;
                found = true;
            }
            
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
        
    }
        
   return 0;
}