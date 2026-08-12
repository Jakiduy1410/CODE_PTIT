#include <bits/stdc++.h>
using namespace std;
int n,m,c;
vector<int> adj[11];
int used[11];

void Input()
{
    cin >> n >> m >> c;
    for(int i = 1 ; i <= 10 ; i++){
        adj[i].clear();
        used[i] = 0;
    }
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
bool canColor(int u , int c)
{
    for(auto v : adj[u])
    {
        if (used[v] == c)
        {
            return false;
        }
    }
    return true;
}
bool Color(int u)
{
    if(u > n) return true;

    for(int i = 1 ; i <= c ;i++)
    {
        if (canColor(u,i))
        {
            used[u] = i;
            if(Color(u+1)) return true;
            used[u] = 0;
        }
        
    }
    return false;   
}

void Solve()
{
    if(Color(1))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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