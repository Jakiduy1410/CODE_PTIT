#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+1;
vector<int> adj[MAXN];
bool visited[MAXN];
int max_len;
int best_node = -1;
void DFS(int u, int cnt)
{
    if (cnt > max_len)
    {
        max_len = cnt;
        best_node = u;
    }
    
    visited[u] = true;
    for(auto i : adj[u])
    {
        if (!visited[i])
        {
            DFS(i,cnt + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    max_len = 0;
    memset(visited , false , sizeof visited);
    DFS(1,0);

    memset(visited , false , sizeof visited);
    DFS(best_node , 0);
    cout << max_len << endl;



    return 0;
}