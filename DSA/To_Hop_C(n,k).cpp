#include <bits/stdc++.h>
using namespace std;

long long C[1001][1001];
const int MOD = 1e9+7;

void Comb()
{
   
    for(int i = 1 ; i <= 1000 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
           if (j == 0 || j == i)
           {
             C[i][j] = 1;
           }
           else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
        }
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Comb();
        int n,k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
    
    return 0;
}