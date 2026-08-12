#include <bits/stdc++.h>
using namespace std;




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,s;
        cin >> n >> s;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(s+1,0);
        dp[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
         for(int j = s ; j >= a[i] ; j--)
         {
            if (dp[j - a[i]] == 1)
            {
                dp[j] = 1;
            }
            
         }
        }
     
        if (dp[s] == 1)
        {
            cout << "YES" << endl;
        }
        else cout <<"NO" << endl;
        
        
    }
    
    return 0;
}