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
        vector<int> a(n) , b(m) , c(n+m-1,0);
        for(int i = 0 ; i< n ; i++) cin >> a[i];
        for(int i = 0 ; i< m ; i++) cin >> b[i];
        for(int i = 0 ; i < n ; i++)
        {
            for (int j = 0; j < m; j++)
            {
                c[i+j] += (a[i] * b[j]);
            }
            
        }

        for(auto i : c) cout << i << " ";
        cout << endl;
    }
       
    return 0;
}