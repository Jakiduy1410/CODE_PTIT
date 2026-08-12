#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];

// bool Cmp(const int &a, const int &b)
// {
//     if (condition)
//     {
//         /* code */
//     }
    
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end()); 
    }
    for (int i = 1; i <= n; i++)
    {
        for (auto j : adj[i])
        {
            if (i < j)
            {

                cout << i << " " << j;
                cout << endl;
            }
        }
    }
    return 0;
}