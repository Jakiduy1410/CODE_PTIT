#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> a(n+1,vector<int>(n+1));
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                adj[i].push_back(j);
            }
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    
    return 0;
}