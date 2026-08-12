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
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin() , a.end());
        int mid = n / 2;

        vector<int> b(a.begin() , a.begin() + mid);
        vector<int> c(a.begin() + mid, a.end());
        int l = b.size() , r = c.size() , cnt = 0;
        while (l > 0 && r > 0)
        {
            if (b[l] * 2 <= c[r])
            {
                cnt++;
                l--;
                r--;
            }
            else l--;
        }
        int ans = (n - cnt*2) + cnt;
        cout << ans << endl;
        
    }
       
    return 0;
}