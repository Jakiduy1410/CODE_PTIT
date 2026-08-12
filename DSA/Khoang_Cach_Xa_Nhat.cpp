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
        int l = 0 , r = n - 1;
        int max_len = -1;
        vector<int> min_l(n);
        min_l[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {
            min_l[i] = min(min_l[i-1],a[i]);
        }
        vector<int> max_r(n);
        max_r[n-1] = a[n-1];
        for(int i = n - 2 ; i >= 0 ; i--)
        {
            max_r[i] = max(max_r[i+1],a[i]);
        }
        int i = 0 , j = 0;
        while (i < n && j < n)
        {
            if (min_l[i] < max_r[j])
            {
                max_len = max(max_len, j - i);
                j++;
            }
            else i++;
        }
        
        cout << max_len << endl;
    }
       
    return 0;
}