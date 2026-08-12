#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool visited[1001];
int degree[1001];

void Input()
{
    cin >> n >> m;
    memset(degree , 0 , sizeof(degree));
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    for(int i = 0 ; i < m ; i++)
    {
        int x,y;
        cin >> x >> y;
        degree[x]++;
        degree[y]++;
    }

}

void Check()
{
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        if (degree[i] % 2 == 1)
        {
            cnt++;
        }
        
    }

    if (cnt == 0)
    {
        cout << 2 << endl;
    }
    else if (cnt == 2)
    {
            cout << 1 << endl;
    }
    else cout << 0 << endl;
    
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Check();
    }
       
    return 0;
}