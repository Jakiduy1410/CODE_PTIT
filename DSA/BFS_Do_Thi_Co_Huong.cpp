#include <bits/stdc++.h>
using namespace std;
int n,m,k;
vector<int> adj[1001];
bool visited[1001];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    // cout << u << " ";
    // visited[u] = true;
    visited[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        cout << tmp << " ";
        for(auto j : adj[tmp])
        {
            if (!visited[j])
            {
                visited[j] = true;
                q.push(j);
            }
            
        }
    }
    
}

void Input()
{
    cin >> n >> m >> k;
    memset(visited, false , sizeof(visited));
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    for(int i = 1 ; i <= m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        BFS(k);
        cout << endl;
    }
        
    return 0;
}
