#include<bits/stdc++.h>

using namespace std;


void Solve(vector<int> a , int n)
{
    priority_queue<int , vector<int>, greater<int>> pq(a.begin(), a.end());
    long long res = 0;
    while (pq.size() > 1)
    {
        int rp_1 = pq.top(); 
        pq.pop();
        int rp_2 = pq.top(); 
        pq.pop();
        int tmp = rp_1 + rp_2;
        res += tmp;
        pq.push(tmp);
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        Solve(a,n);
    }
    
}