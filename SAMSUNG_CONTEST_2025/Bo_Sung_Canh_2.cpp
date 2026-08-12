#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
int n,m;
vector<int> adj[MAXN];
bool visited[MAXN];
int CC[MAXN];

void Input()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    memset(visited , false , sizeof visited);
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

void BFS(int u)
{
    CC[u] = 1;
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(auto i : adj[tmp]){
            if (!visited[i])
            {
                CC[u]++;
                visited[i] = true;
                q.push(i);
            }
            
        }
    }
    
}
void Solve()
{
    BFS(1);
    int len = CC[1];
    int max_cc = 0;
    for(int i = 2 ; i <= n ; i++)
    {
        if (!visited[i])
        {
            BFS(i);
            if (CC[i] > max_cc)
            {
                max_cc = CC[i];
            }
            
        }
    }
    cout << len + max_cc << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Input();
    Solve();   
    return 0;
}