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
        for(int i  = 0 ; i < n ; i++) cin >> a[i];
        vector<int> l(n);
        l[0] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            if (a[i-1] < a[i])
            {
                l[i] = l[i-1] + 1;
            }
            else l[i] = 1;
        }
        vector<int> r(n);
        r[n-1] = 1;
        for(int i = n-2 ; i >= 0 ; i--)
        {
            if (a[i+1] < a[i])
            {
                r[i] = r[i+1] + 1;
            }
            else r[i] = 1;
            
        } 
        int max_len = 0;
        for(int i = 0 ; i < n ; i++)
        {
            max_len = max(max_len , r[i] + l[i] - 1);
        }
        cout << max_len << endl;
    }
       
    return 0;
}