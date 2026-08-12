#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        long long cnt = 0;
        sort(a.begin(), a.end());
        for(int i = 0 ; i < n - 2 ; i++)
        {
            int l = i + 1;
            int r = n - 1;
            long long tmp = k - a[i];
            while (l < r)
            {
                if (a[l] + a[r] < tmp)
                {
                    cnt += (r - l);
                    l++;
                }
                else r--;
                
            }
            
        }
        cout << cnt << endl;
        
    }
       
    return 0;
}