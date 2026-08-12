#include <bits/stdc++.h>
using namespace std;
int n, m, u, v;
vector<int> adj[1001];
bool visited[1001];
vector<int> res;
bool reach = false;

void BFS(int u, int v)
{
    if (reach)
        return;

    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        if (tmp == v)
        {
            reach = true;
            return;
        }
        q.pop();

        for (auto i : adj[tmp])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void Input()
{
    cin >> n >> m >> u >> v;
    for (int i = 1; i <= n; i++)
        adj[i].clear();
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    res.clear();
}

void Solve()
{
    for (int i = 1; i <= n; i++)
    {
        reach = false;
        memset(visited, false, sizeof visited);
        if (i != u && i != v)
        {
            visited[i] = true;
            BFS(u, v);
            if (!reach)
                res.push_back(i);
        }
    }
    if (res.empty())
    {
        cout << 0;
    }
    else
       cout << res.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Solve();
        cout << endl;
    }

    return 0;
}