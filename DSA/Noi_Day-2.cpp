#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        priority_queue< long long , vector<long long> , greater<long long>> pq(a.begin() , a.end());
        long long res = 0;
        while (pq.size() > 1)
        {
            long long op1 = pq.top(); pq.pop();
            long long op2 = pq.top(); pq.pop();
            long long len = (op1 + op2) % MOD;
            res += len;
            pq.push(len);
        }
        // while (!pq.empty())
        // {
        //     res += pq.top();
        //     res %= MOD;
        //     pq.pop();
        // }
        cout << res << endl;
        
        
    }
       
    return 0;
}