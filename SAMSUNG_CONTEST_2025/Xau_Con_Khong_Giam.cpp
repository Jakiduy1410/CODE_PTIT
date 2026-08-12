#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        vector<long long> dp(n+1,1);
        for(int i = 1 ; i < n ; i++)
        {
            int num_i = a[i] - '0';
            for(int j = 0 ; j < i ; j++)
            {
                int num_j = a[j] - '0';
                if (num_j <= num_i)
                {
                    dp[i] = max(dp[i] , dp[j] + 1);
                }
            }
        }
        cout << *max_element(dp.begin() , dp.end()) << endl;
    }   
    return 0;
}