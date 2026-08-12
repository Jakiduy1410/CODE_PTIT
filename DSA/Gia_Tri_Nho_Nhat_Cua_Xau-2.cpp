#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        map<char,int> mp;
        string s;
        cin >> s;
        for(char c : s) mp[c]++;
        priority_queue<int> pq;
        for(auto &[x,y] : mp)
        {
            pq.push(y);
        }

        while (k--)
        {
            int tmp = pq.top();
            tmp--;
            pq.pop();
            pq.push(tmp);
        }
        long long res = 0;
        while (!pq.empty())
        {
            res += (pq.top() * pq.top());
            pq.pop();
        }
        cout << res << endl;
        
        
        
    }
       
    return 0;
}