#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<long long> c;
        for(int i = 0 ; i < n ; i++)
        {
            long long x;
            cin >> x;
            c.push_back(x);
        }
        for(int j = 0 ; j < m ; j++){
            long long x;
            cin >> x;
            c.push_back(x);
        }
        sort(c.begin() , c.end());
        for(auto i : c) cout << i << " ";
        cout << endl;
    }
       
    return 0;
}