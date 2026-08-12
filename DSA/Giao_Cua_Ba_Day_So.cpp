#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        vector<long long> a(n) , b(m) , c(k);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = 0 ; i < m ; i++) cin >> b[i];
        for(int i = 0 ; i < k ; i++) cin >> c[i];
        bool found = false;

        int i=0,j=0,d=0;
        while (i < n && j < m && d < k)
        {
            if (a[i] == b[j] && b[j] == c[d])
            {
                found = true;
                cout << a[i] << " ";
                i++;j++;d++;
            }
            long long min_num = min(min(a[i],b[j]),c[d]);
            if (a[i] == min_num)
            {
                i++;
            }
            if (b[j] == min_num)
            {
                j++;
            }
            if (c[d] == min_num)
            {
                d++;
            }
        }
        
        if (!found)
        {
            cout << "-1";
        }
        cout << endl;
    }
        
   return 0;
}