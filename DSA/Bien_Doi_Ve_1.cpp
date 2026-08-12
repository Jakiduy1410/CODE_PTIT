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
        int n;
        cin >> n;
        int visited[100000];
        memset(visited, -1, sizeof visited);
        queue<int> q;
        q.push(n);
        visited[n] = 0;
        while (!q.empty())
        {
            int tmp = q.front();
            q.pop();

            if (tmp == 1)
            {
                break;
            }

            if (tmp % 3 == 0)
            {
                int a = tmp / 3;
                if (visited[a] == -1)
                {
                    visited[a] = visited[tmp] + 1;
                    q.push(a);
                }
            }
            if (tmp % 2 == 0)
            {
                int a = tmp / 2;
                if (visited[a] == -1)
                {
                    visited[a] = visited[tmp] + 1;
                    q.push(a);
                }
            }
            if (tmp - 1 != 0)
            {
                if (visited[tmp - 1] == -1)
                {
                    visited[tmp - 1] = visited[tmp] + 1;
                    q.push(tmp - 1);
                }
            }
        }
        cout << visited[1] << endl;
    }

    return 0;
}