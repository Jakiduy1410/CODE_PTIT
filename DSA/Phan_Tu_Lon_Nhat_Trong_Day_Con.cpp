#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n+1) , max_r(n+1) , max_l(n+1);
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        for(int i = 1 ; i <= n ; i++)
        {
            if ((i-1) % k == 0)
            {
                max_l[i] = a[i];
            }
            else max_l[i] = max(max_l[i-1], a[i]);
        }
        for(int i = n ; i >= 1 ; i--)
        {
            if (i == n || i % k == 0)
            {
                max_r[i] = a[i];
            }
            else max_r[i] = max(max_r[i+1], a[i]);
            
        }
        for(int i = 1 ; i <= n-k+1 ; i++)
        {
            cout << max(max_r[i],max_l[i+k-1]) << " ";
        }
        
        cout << endl;
    }
       
    return 0;
}