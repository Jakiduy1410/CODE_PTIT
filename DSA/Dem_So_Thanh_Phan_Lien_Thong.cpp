#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1001];
vector<int> adj[1001];
int CC;

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(int j : adj[tmp])
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
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    memset(visited , false , sizeof visited);
    CC = 0;
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }    
}

void Connect_Comp()
{
    for(int i = 1 ; i <= n ; i++)
    {
        if (!visited[i])
        {
            CC++;
            BFS(i);
        }
        
    }
    cout << CC << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Connect_Comp();
        //cout << endl;
    }
       
    return 0;
}