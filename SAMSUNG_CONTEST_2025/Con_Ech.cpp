#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> dp(n+1,LLONG_MAX);
    dp[0] = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }   
    for(int i = 1 ; i < n ; i++)
    {
        int start = max(0 , i - k);
        for(int j = start ; j < i ; j++)
        {
            dp[i] = min(dp[i] , dp[j] + abs(a[i] - a[j]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}