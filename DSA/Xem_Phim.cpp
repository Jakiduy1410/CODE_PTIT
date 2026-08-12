#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int kg, n;
    cin >> kg >> n;
    vector<int> dp(kg+1,0);
    vector<int> a(n+1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = kg ; j >= a[i] ; j--)
        {
            dp[j] = max(dp[j] , dp[j - a[i]] + a[i]);
            
        }
        
    }
    cout << dp[kg] << endl;
    return 0;
}