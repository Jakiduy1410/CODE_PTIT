#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool visited[1001];
bool found;
void Input()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ;i++) adj[i].clear();
    for(int i = 0 ; i< m ; i++)
    {
        int x ,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void BFS(int u , int v)
{
    memset(visited, false, sizeof(visited));
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
                visited[j] = true;
            }
            
        }
        
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
        int q;
        cin >> q;
        while (q--)
        {
            int l,r;
            cin >> l >> r;
            found = false;
            BFS(l,r);
            if (found)
            {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
            
        }
        
    }
    return 0;
}