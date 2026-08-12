#include <bits/stdc++.h>
using namespace std;

int n,m,u,v;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
vector<int> res;
bool found;

void Input()
{
    cin >> n >> m >> u >> v;
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    memset(visited, false , sizeof(visited));
    memset(parent, 0 , sizeof(parent));
    found = false;
    res.clear();
    for(int i = 1 ; i <= m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

void BFS(int u , int v)
{
    if (u == v)
    {
        found = true;
        return;
    }
    queue<int> q;
    q.push(u);
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
        
        for(auto j : adj[tmp])
        {
            if (!visited[j])
            {
                q.push(j);
                parent[j] = tmp;
                visited[j] = true;
            }
            
        }
    }
}

void Path(int u , int v)
{
    if(!found) return;
    vector<int> path;
    int tmp = v;
    while (tmp != 0)
    {
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(path.begin(),path.end());
    res = path;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        BFS(u,v);
        Path(u,v);
        if (found)
        {
            for(auto i : res) cout << i << " ";
        }
        else cout << -1;
        
        cout << endl;
    }
       
    return 0;
}