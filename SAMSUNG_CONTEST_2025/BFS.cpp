#include <bits/stdc++.h>
using namespace std;
int n, m, u, v;
bool visited[1001];
vector<int> adj[1001];
bool found;
int parent[1001];
void BFS(int u, int v)
{
    if (found)
    {
        return;
    }

    queue<int> q;
    q.push(u);
    parent[u] = 0;
    visited[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        if (tmp == v)
        {
            found = true;
            return;
        }

        for (auto i : adj[tmp])
        {
            if (!visited[i])
            {
                parent[i] = tmp;
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void Input()
{
    cin >> n >> m >> u >> v;
    found = false;
    memset(visited, false, sizeof visited);
    memset(parent, 0, sizeof parent);
    for (int i = 1; i <= n; i++)
        adj[i].clear();
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void Path()
{
    if(!found){
        cout << -1;
        return;
    }
    vector<int> paths;
    int tmp = v;
    while (tmp != 0)
    {
        paths.push_back(tmp);
        tmp = parent[tmp];
    }
    //paths.push_back(u);
    reverse(paths.begin(), paths.end());
    cout << paths.size() - 1;
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
        BFS(u,v);
        Path();
        cout << endl;
    }

    return 0;
}