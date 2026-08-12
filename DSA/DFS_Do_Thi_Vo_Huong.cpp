#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int n, m, k;

void DFS(int u)
{
    stack<int> st;
    st.push(u);

    while (!st.empty())
    {
        int tmp = st.top();
        st.pop();
        if (visited[tmp])
        {
            continue;
        }

        visited[tmp] = true;
        cout << tmp << " ";

        for (int v : adj[tmp])
        {
            if (!visited[v])
            {

                st.push(v);
            }
        }
    }
}

void DFS_Recursive(int u) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) { 
        if (!visited[v]) {
            DFS_Recursive(v); 
        }
    }
}
void Input()
{
    cin >> n >> m >> k;
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++)
        adj[i].clear();
    for (int i = 0; i < m; i++)
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
}

void Output()
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (auto j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        //DFS(k);
        DFS_Recursive(k);
        cout << endl;
        // Output();
    }

    return 0;
}