#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int n, m;
vector<int> adj[MAXN];
int low[MAXN], num[MAXN];
stack<int> st;
bool onStack[MAXN];
int timer = 0, SCCcount = 0; // Sửa timer = 0 cho chuẩn
int belongToSCC[MAXN];
int inDegreeSCC[MAXN]; // Mảng lưu bậc vào của các SCC

void Tarjan(int u)
{
    num[u] = low[u] = ++timer; // Tăng timer trước rồi gán
    st.push(u);
    onStack[u] = true;

    for (auto i : adj[u])
    {
        if (num[i] == 0)
        {
            Tarjan(i);
            low[u] = min(low[u], low[i]);
        }
        else if (onStack[i])
        {
            low[u] = min(low[u], num[i]);
        }
    }

    if (low[u] == num[u])
    {
        SCCcount++;
        while (true)
        {
            int v = st.top();
            st.pop();
            onStack[v] = false;
            belongToSCC[v] = SCCcount;
            if (u == v)
            {
                break;
            }
        }
    }
}

void Input()
{
    if (cin >> n >> m) {
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        // Reset các mảng (quan trọng nếu có nhiều test case, bài này 1 test thì ok)
        memset(low, 0, sizeof low);
        memset(num, 0, sizeof num);
        memset(onStack, false, sizeof onStack);
        memset(inDegreeSCC, 0, sizeof inDegreeSCC);
    }
}

void Solve()
{
    // 1. Duyệt hết các đỉnh, chưa thăm thì gọi Tarjan (SỬA LỖI 1)
    for(int i = 1; i <= n; i++) {
        if (!num[i]) Tarjan(i);
    }

    // 2. Tính bậc vào cho từng SCC (SỬA LỖI 2 - Logic chính)
    for (int u = 1; u <= n; u++) 
    {
        for (int v : adj[u]) 
        {
            // Nếu có cạnh u -> v mà u, v thuộc 2 SCC khác nhau
            if (belongToSCC[u] != belongToSCC[v]) 
            {
                // Thì SCC chứa v có thêm 1 đường đi vào
                inDegreeSCC[belongToSCC[v]]++;
            }
        }
    }

    // 3. Đếm số SCC có bậc vào bằng 0
    int ans = 0;
    for (int i = 1; i <= SCCcount; i++) 
    {
        if (inDegreeSCC[i] == 0) 
        {
            ans++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Input();
    Solve();
    return 0;
}