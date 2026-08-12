#include <bits/stdc++.h>
using namespace std;

struct A
{
    int cnt = 0;
    int pos;
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        map<long long , A> mp;
        for(int i = 0 ; i < n ; i++)
        {
            long long x;
            cin >> x;
            if (mp.find(x) == mp.end())
            {
                mp[x].pos = i;
            }
            mp[x].cnt++;
        }
        bool found = false;
        int pos = n;
        long long res = 0;
        for(auto &[x,y] : mp)
        {
            if (y.cnt > 1)
            {
                if (y.pos < pos)
                {
                    res = x;
                    pos = y.pos;
                }
                
            }
            
        }
        if (res != 0)
        {
            cout << res << endl;
        }
        else cout << "NO" << endl;
        
        //cout << endl;
       
        
    }
       
    return 0;
}