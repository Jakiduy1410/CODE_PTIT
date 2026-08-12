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
        vector<int> ugly(n+1, 0);

        priority_queue<long long , vector<long long>, greater<long long>> pq;
        pq.push(1);
        int i = 1;
        unordered_map<long long, int> mp;
        mp[1] == 1;
        while (!pq.empty())
        {
            long long tmp = pq.top();
            pq.pop();
            ugly[i] = tmp;
            if (i == n)
            {
                break;
            }

            long long a = tmp * 2;
            long long b = tmp * 3;
            long long c = tmp * 5;
            if(mp.find(a) == mp.end())
            {
                mp[a] = 1;
                pq.push(a);
            }
            if(mp.find(b) == mp.end())
            {
                mp[b] = 1;
                pq.push(b);
            }
            if(mp.find(c) == mp.end())
            {
                mp[c] = 1;
                pq.push(c);
            }
            i++;
            
        }
        cout << ugly[n] << endl;
        
    }
       
    return 0;
}