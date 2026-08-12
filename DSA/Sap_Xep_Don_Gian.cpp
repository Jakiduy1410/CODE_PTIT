#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> pos(n+1);
    for(int i = 1;  i <= n ; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    vector<int> dp(n+1,1);
    for(int i = 2 ; i <= n ; i++)
    {
        if (pos[i] > pos[i-1])
        {
            dp[i] = dp[i-1] + 1;
        }
        else dp[i] = 1;
    }

    int max_len = *max_element(dp.begin(),dp.end());
    cout << n - max_len << endl;
    
    
    return 0;
}