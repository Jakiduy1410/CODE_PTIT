#include <bits/stdc++.h>
using namespace std;
int n,m,u,v;
const int MAXN = 1e3+5;
vector<int> adj[MAXN];
bool visited[MAXN];
bool found;

void Input()
{
    cin >> n >> m >> u >> v;
    for(int i = 1 ; i <= 1001 ; i++) adj[i].clear();
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

void DFS(int u,int v)
{
    if (u == v)
    {
        found = true;
        return;
    }
    if(found) return;
    
    visited[u] = true;
    for(auto i : adj[u])
    {
        if (!visited[i])
        {
            DFS(i,v);
        }
        
    }
    
}

void Solve()
{
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        memset(visited , false ,sizeof(visited));
        found = false;
        if (i != u && i != v)
        {
            visited[i] = true;
            DFS(u,v);
            if (!found)
            {
                cnt++;
            }
        }
        

    }
    cout << cnt << endl;    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Solve();
    }
       
    return 0;
}