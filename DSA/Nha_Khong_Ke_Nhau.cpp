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
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        vector<long long> dp(n,0);
        dp[0] = a[0];
        dp[1] = max(dp[0],1LL* a[1]);
        for(int i = 2 ; i < n ; i++)
        {
           dp[i] = max(dp[i-1] , a[i] + dp[i-2]);
        }
        
        cout << *max_element(dp.begin(),dp.end()) << endl;

    }
       
    return 0;
}