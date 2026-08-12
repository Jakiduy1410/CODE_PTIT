#include <bits/stdc++.h>
using namespace std;
int n,m,j,k;
vector<int> adj[1001];
bool visited[1001];
vector<int> res;
bool found;
int parent[1001];
void Input()
{
    cin >> n >> m >> j >> k;
    memset(visited, false , sizeof(visited));
    memset(parent, 0 , sizeof(parent));
    found = false;
    res.clear();
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    
}

void DFS(int j , int k)
{
    if (found)
    {
        return;
    }
    
    visited[j] = true;
    if (j == k)
    {
        found = true;
        return;
    }
    
    for(int u : adj[j])
    {
        if (!visited[u])
        {
            parent[u] = j;
            DFS(u,k);
            if (found)
            {
                return;
            }
            
        }
        
    }
    
}

void Path(int j , int k)
{
    if (!found)
    {
        return;
    }
    vector<int> path;
    //path.push_back(k);
    int tmp = k;
    while (tmp != 0)
    {
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(path.begin() , path.end());
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
        DFS(j,k);
        Path(j,k);
        if (found)
        {
            for(auto i : res) cout << i << " ";
        }
        else cout << -1;
        cout << endl;
    }
       
    return 0;
}