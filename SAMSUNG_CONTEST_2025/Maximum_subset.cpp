#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
vector<int> adj[MAXN];
bool visited[MAXN];
int C[MAXN];
long long dp[MAXN][2];

void DFS(int u)
{
    visited[u] = true;

    dp[u][1] = C[u];
    dp[u][0] = 0;
    for(auto i : adj[u])
    {
        if (!visited[i])
        {
            DFS(i);
            dp[u][0] += max(dp[i][0] , dp[i][1]);
            dp[u][1] += dp[i][0]; 
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n; 
    for(int i = 1 ; i <= n ; i++) cin >> C[i];  
    memset(visited , false, sizeof visited);
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    DFS(1);
    cout << max(dp[1][0] , dp[1][1]) << endl;

    return 0;
}