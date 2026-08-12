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
        queue<string> q;
        q.push("1");
        for (int i = 0; i < n; i++)
        {
            string tmp = q.front();
            cout << tmp << " ";
            q.pop();

            q.push(tmp + "0");
            q.push(tmp + "1");
        }
        cout << endl;
        
    }
        
  return 0;
}