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
        int res = INT_MAX;
        int min_num = INT_MAX;
        sort(a.begin(), a.end());
        for(int i = 1 ; i < n ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                
                if (abs(a[i]+a[j]) < min_num)
                {
                    min_num = abs(a[i] + a[j]);
                    res = a[i] + a[j];
                }
                
            }
        }
        cout << res << endl;
        
        
    }
    
    return 0;
}