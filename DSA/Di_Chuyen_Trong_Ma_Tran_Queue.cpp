#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        int visited[n + 5][m + 5];
        memset(visited, -1, sizeof(visited));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        queue<pair<int, int>> q;
        q.push({0, 0});
        visited[0][0] = 0;
        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (i == n - 1 && j == m - 1)
            {
                break;
            }

            int new_i = i + a[i][j];
            int new_j = j + a[i][j];
            if (visited[new_i][j] == -1 && new_i < n)
            {
                visited[new_i][j] = visited[i][j] + 1;
                q.push({new_i, j});
            }
            if (visited[i][new_j] == -1 && new_j < m)
            {
                visited[i][new_j] = visited[i][j] + 1;
                q.push({i, new_j});
            }
        }
        cout << visited[n-1][m-1] << endl;

    }

    return 0;
}