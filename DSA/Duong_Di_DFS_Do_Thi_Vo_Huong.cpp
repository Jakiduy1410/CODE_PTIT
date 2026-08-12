#include <bits/stdc++.h>
using namespace std;

int n,m,u,v;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
bool found;
void DFS(int u , int target)
{
    if(found) return;
    if (u == target)
    {
        found = true;
        return;
    }
    
    visited[u] = true;
    for(int j : adj[u])
    {
        if (!visited[j])
        {
            parent[j] = u;
            DFS(j,target);
            if(found) return;
        }
        
    }
}

void Path()
{
    if (!found)
    {
        return;
    }

    vector<int> paths;
    
    int tmp = v;
    while (tmp != 0)
    {
        paths.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(paths.begin() , paths.end());
    for(auto i : paths) cout << i << " ";
    
}
void Input()
{
    cin >> n >> m >> u >> v;
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    memset(parent, 0 , sizeof parent);
    memset(visited , false , sizeof visited);
    found = false;
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
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
        DFS(u,v);
        Path();
        cout << endl;

    }
       
    return 0;
}