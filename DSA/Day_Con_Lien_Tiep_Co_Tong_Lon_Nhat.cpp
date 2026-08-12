
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
        vector<int> a(n+1);
        vector<int> prefix(n+1);
        prefix[0] = 0;
        int max_num = INT_MIN;
        int pos = 1;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i-1] + a[i];
            if (prefix[i] >= max_num)
            {
                max_num = prefix[i];
                pos = i;
            }
            
        }
        for(auto i : prefix) cout << i << " ";
        cout << endl;
        int res = 0;
        int prefix_min = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            res = max(res , prefix[i] - prefix_min);
            prefix_min = min(prefix[i], prefix_min);
        }
        cout << res << endl;
        
    }
       
    return 0;
}