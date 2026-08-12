#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        map<long long , int> mp;
        long long cnt = 0;
        for(int i = 0 ; i < n ; i++)
        {
            long long tmp = k - a[i];
            cnt += mp[tmp];
            mp[a[i]]++;
        }   
        cout << cnt << endl;

    }
       
    return 0;
}