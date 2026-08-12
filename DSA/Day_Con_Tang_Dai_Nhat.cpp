#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> dp(n+1,0);
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    dp[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        
    }
    cout << *max_element(dp.begin(),dp.end()) << endl;
    return 0;
}