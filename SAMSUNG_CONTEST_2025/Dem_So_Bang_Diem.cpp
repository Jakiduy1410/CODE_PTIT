#include <bits/stdc++.h>
using namespace std;
int dx[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int min_cost = 10;
int max_cost = 0;
bool can_used[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        can_used[x] = true;
    }

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int d = 0; d <= 9; d++)
        {
            if (can_used[d])
            {

                int cost = dx[d];
                if (cost + i <= n)
                {
                    dp[i + cost] = max(dp[i + cost], dp[i] + 1);
                }
            }
        }
    }
    int size = dp[n];
    string tmp = "";
    while (size > 0)
    {
        for(int i = 9 ; i >= 0 ; i--)
        {
            if (can_used[i])
            {
                int cost = dx[i];
                if (dp[n - cost] == size - 1 && n - cost >= 0)
                {
                    size--;
                    tmp += i + '0';
                    n -= cost;
                    break;
                }
                
            }
            
        }
    }
    cout << tmp;
    return 0;
}