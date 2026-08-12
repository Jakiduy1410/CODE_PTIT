#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<long long> q;
        q.push(9);
        while (!q.empty())
        {
            long long tmp = q.front();
            q.pop();
            if (tmp % n == 0)
            {
                cout << tmp;
                break;
            }
            q.push(tmp*10+0);
            q.push(tmp*10+9);
            
        }
        cout << endl;
    }
       
    return 0;
}