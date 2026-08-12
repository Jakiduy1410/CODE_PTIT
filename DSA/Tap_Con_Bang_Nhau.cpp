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
        vector<int> a(n+1,0);
        long long sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        
        vector<int> dp(sum+1,0);
        int res = sum / 2;
        dp[0] = 1;
        for(int i = 1 ; i <= n ; i++)
        {
         for(int j = res ; j >= a[i] ; j--)
         {
            if (dp[j - a[i]] == 1)
            {
                dp[j] = 1;
            }
            
         }
        }
        if (dp[res] == 1)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        

    }
    
    return 0;
}