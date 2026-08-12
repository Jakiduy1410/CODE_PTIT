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
        vector<vector<double>> a(n , vector<double>(2));
        for (int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> dp(n+1,1);
        //dp[0] = 1;
        int max_len = 1;
        for(int i = 1 ; i < n ; i++)
        {
            double x = a[i][0];
            double y = a[i][1];
            for(int j = 0 ; j < i ; j++)
            {
                double tmp1 = a[j][0];
                double tmp2 = a[j][1];
                if (tmp1 < x && tmp2 > y)
                {
                    dp[i] = max(dp[i] , dp[j] + 1);
                    max_len = max(max_len , dp[i]);
                }
                
            }
            
        }
        cout << max_len << endl;
        
    }
       
    return 0;
}