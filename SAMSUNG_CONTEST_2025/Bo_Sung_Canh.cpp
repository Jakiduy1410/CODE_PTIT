#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5+1;
int n,m;
vector<int> adj[MAX];
bool visited[MAX];
int CC_len[MAX];
int max_1 = INT_MIN;
int len = 0;
int ok = 0;
void BFS(int u)
{
    queue<int> q;
    CC_len[u] = 1;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(auto i : adj[tmp])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
                CC_len[u]++;
            }
            
        }
    }
}

void Solve()
{
    BFS(1);
    max_1 = CC_len[1];
    for(int i = 1 ; i <= n ; i++)
    {
        if (!visited[i])
        {
            BFS(i);
            if(CC_len[i] >= len)
            {
                len = CC_len[i];
            }
        }
        
    }
    cout << max_1 + len << endl;
}

void Input()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    memset(visited , false , sizeof(visited));
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
    Input();
    Solve();   
    return 0;
}