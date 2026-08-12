#include <bits/stdc++.h>
using namespace std;

bool Cp(int x)
{
    if (x < 0)
        return false;
    int n = sqrt(x);
    return n * n == x;
}

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
        queue<int> q;
        q.push(n);
        unordered_map<int, int> mp;
        mp[n] = 1;
        while (!q.empty())
        {
            int tmp = q.front();
            q.pop();
            if (tmp == 0)
            {
                break;
            }

            int a = tmp - 1;
            int b = tmp + 1;
            int c = tmp * -1;
            int d = tmp, e = tmp;
            if (tmp % 2 == 0)
            {
                d = tmp / 2;
                if (!mp.count(d))
                {
                    mp[d] = mp[tmp] + 1;
                    q.push(d);
                }
            }
            if (Cp(tmp))
            {
                e = sqrt(tmp);
                if (!mp.count(e))
                {
                    //mp[e]++;
                    mp[e] = mp[tmp] + 1;
                    q.push(e);
                }
            }
            if (!mp.count(a))
            {
                //mp[a]++;
                mp[a] = mp[tmp] + 1;
                q.push(a);
            }
            if (!mp.count(b))
            {
                //mp[b]++;
                mp[b] = mp[tmp] + 1;
                q.push(b);
            }
            if (!mp.count(c))
            {
                //mp[c]++;
                mp[c] = mp[tmp] + 1;
                q.push(c);
            }
        }

        cout << mp[0] - 1<< endl;
    }

    return 0;
}