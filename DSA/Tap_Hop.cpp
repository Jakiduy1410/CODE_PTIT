#include <bits/stdc++.h>
using namespace std;
int n,k,s;
int dp[22][11][156];

int Solve(int i, int size , int sum)
{
    if (size == 0 && sum == 0)
    {
        return 1;
    }
    if (i == 0 || size == 0 || sum == 0)
    {
        return 0;
    }
    
    if (dp[i][size][sum] != -1)
    {
        return dp[i][size][sum];
    }
    
    int pick = Solve(i-1, size - 1 , sum - i);
    int not_pick = Solve(i-1 ,size , sum);
    dp[i][size][sum] = pick + not_pick;
    return dp[i][size][sum];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (cin)
    {   
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
        {
           // cout << "0 0 0" << endl;
            return 0;
        }
        memset(dp,-1 , sizeof dp);
        cout << Solve(n,k,s);
        cout << endl;
        
    }
    

    return 0;
}