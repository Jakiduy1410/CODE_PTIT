#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,q;
    cin >> n >> m >> q;
    int dist[305][305];
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++){
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else dist[i][j] = INT_MAX;
        }
    }   

    for(int i = 0 ; i < m ; i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v] , w);
    }

    for(int k = 1 ; k <= n ; k++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            for(int i = 1 ; i <= n ; i++)
            {
                dist[i][j] = min(dist[i][j] , max(dist[i][k] , dist[k][j]));
            }
        }
    }
    while (q--)
    {
        int x,y;
        cin >> x >> y;
        
        if (dist[x][y] == INT_MAX)
        {
            cout << -1;
        }
        else cout << dist[x][y];
        
        cout << endl;
    }
    
    return 0;
}