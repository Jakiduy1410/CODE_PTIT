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
        string s;
        cin >> k >> s;
        map<char , int> mp;
        for(char c : s){
            mp[c]++;
        }
        priority_queue<int> pq;
        for(auto i : mp)
        {
            pq.push(i.second);
        }
        while (k > 0 && !pq.empty())
        {
            int tmp = pq.top();
            pq.pop();
            tmp--;
            if (tmp > 0)
            {
                pq.push(tmp);
            }
            k--;
            
        }

        long long res = 0;
        while (!pq.empty())
        {
            long long tmp = pq.top();
            pq.pop();
            res += (tmp*tmp);
        }
        cout << res << endl;
        
        

    }
       
    return 0;
}