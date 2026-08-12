#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> m >> n;
        vector<int> weight(m),cost(m);
        for(int i = 0 ; i < m ; i++) cin >> weight[i];
        for(int i = 0 ; i < m ; i++) cin >> cost[i];
        //int tmp = n;
        vector<int> dp(n+1,0);
        for(int i = 0 ; i < m ; i++)
        {
            int tmp = n;
            while (tmp >= weight[i])
            {
                dp[tmp] = max(dp[tmp], dp[tmp-weight[i]] + cost[i]);
                tmp--;
            }
            
        }
        cout << dp[n] << endl;
    }
       
    return 0;
}