#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6+5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int s ,t;
        cin >> s >> t;

        if (s >= t)
        {
            cout << s - t << endl;
            continue;
        }

        queue<pair<int,int>> q;
        int check[MAX];
        memset(check , -1 , sizeof(check));
        check[s] = 0;
        q.push({s,check[s]});
        while (!q.empty())
        {
            int tmp = q.front().first;
            //int cnt = check[tmp];
            int a = tmp - 1;
            int b = tmp * 2;
            q.pop();
            if(a > 0 && check[a] == -1)
            {
                check[a] = check[tmp] + 1;
                if (a == t)
                {
                    break;
                }
                q.push({a,check[a]});
            }
            if (b < MAX && check[b] == -1)
            {
                check[b] = check[tmp] + 1;
                if (b == t)
                {
                    break;
                }
                q.push({b,check[b]});
            }
            
        }
        cout << check[t] << endl;

        
    }
       
    return 0;
}