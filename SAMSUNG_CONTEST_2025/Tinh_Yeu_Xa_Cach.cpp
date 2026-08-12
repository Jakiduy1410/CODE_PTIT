#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> adj[100000];
bool visited[100000];
long long dp[100000][2];
long long C[100000];
void Input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> C[i];
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void DFS(int u)
{
    dp[u][1] = C[u];
    dp[u][0] = 0;
    visited[u] = true;
    for (auto i : adj[u])
    {
        if (!visited[i])
        {
            DFS(i);
            dp[u][1] += dp[i][0];
            dp[u][0] += max(dp[i][0], dp[i][1]);
        }
    }
}


void Solve()
{
    DFS(1);
    cout << max(dp[1][0], dp[1][1]) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Input();
    Solve();
    return 0;
}