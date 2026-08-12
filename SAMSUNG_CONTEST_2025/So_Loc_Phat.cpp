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
        vector<string> res;
        queue<string> q;
        q.push("6");
        q.push("8");
        while (!q.empty())
        {
            string tmp = q.front();
            q.pop();
            if (tmp.size() > n)
            {
                break;
            }
            
            res.push_back(tmp);
            q.push(tmp + "6");
            q.push(tmp + "8");

        }

        cout << res.size() << endl;
        for(auto i : res) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}