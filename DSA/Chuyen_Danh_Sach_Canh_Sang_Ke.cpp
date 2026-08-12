#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        for(int i = 1 ; i <= n ; i++)
        {
            adj[i].clear();
        }
        for(int i = 0 ; i < m ; i++)
        {
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1 ; i <= n ; i++)
        {
            cout << i << ": ";
            for(auto j : adj[i])
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
       
    return 0;
}