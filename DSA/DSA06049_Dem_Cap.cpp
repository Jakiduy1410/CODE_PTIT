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
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long cnt = 0;
        int l = 0 , r = 1;
        while (r < n)
        {
            if (a[r] - a[l] < k) 
            {
                cnt += (r-l);
                r++;
            }
            else if(a[r] - a[l] >= k)
            {
                l++;
            }
            if (r == l)
            {
                r++;
            }
                      
        }
        
        cout << cnt << endl;
    }
       
    return 0;
}