#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
int in[1001],out[1001];

void Input()
{
    cin >> n >> m;
    memset(in , 0 , sizeof(in));
    memset(out, 0 , sizeof(out));
    for(int i = 1 ; i <= n ; i++) adj[i].clear();
    for(int i = 0 ; i < m ; i++){
        int x, y;
        cin >> x >> y;
        out[x]++;
        in[y]++;
    }
}

bool Check()
{
    for(int i = 1 ; i <= n ; i++)
    {
        if (in[i] != out[i])
        {
            return false;
        }
        
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t; 
    while (t--)
    {
        Input();
        if (Check())
        {
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
     
    return 0;
}