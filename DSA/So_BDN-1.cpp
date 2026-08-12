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
        string n;
        cin >> n;
        int cnt = 0;
        queue<string> q;
        q.push("1");
        while (1)
        {
            string tmp = q.front();
            if (tmp.size() < n.size() || (tmp.size() == n.size() && tmp <= n))
            {
                cnt++;
            }
            else break;
            q.pop();
            q.push(tmp + "0");
            q.push(tmp + "1");
        }
        cout << cnt << endl;
    }

    return 0;
}