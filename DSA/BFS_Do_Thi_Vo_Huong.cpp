#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int n, m, k;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        if (visited[tmp])
        {
            continue;
        }

        cout << tmp << " ";
        visited[tmp] = true;
        for(int v : adj[tmp])
        {
            if (!visited[v])
            {
                q.push(v);
            }
            
        }
        
    }
    
}

void Input()
{
    cin >> n >> m >> k;
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++)
        adj[i].clear();
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
}

void Output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
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
        BFS(k);
        cout << endl;
        // Output();
    }

    return 0;
}