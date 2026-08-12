#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    while (t--)
    {
        long n,m;
        cin >> n >> m;
        //vector<long> a(n) , b(m);
        set<long> st1 , st2 , st3;
        for(long i = 0 ; i < n ; i++)
        {
            long x;
            cin >> x;
            st1.insert(x);
            st3.insert(x);
        }
        for(long i = 0 ; i < m ; i++)
        {
            long y;
            cin >> y;
            st1.insert(y);
            st2.insert(y);
        }
        for(auto i : st1) cout << i << " ";
        cout << endl;
        for(auto i : st3){
          if (st2.find(i) != st2.end())
          {
            cout << i << " ";
          }
        }
        cout << endl;
    }
    
    return 0;
}