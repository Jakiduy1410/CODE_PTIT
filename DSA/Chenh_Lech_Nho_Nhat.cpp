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
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin(),a.end());
        long long tmp = LLONG_MAX;
        for(int i = 1 ; i < n ; i++)
        {
            tmp = min(tmp,1LL*(a[i] - a[i-1]));
        }
        cout << tmp << endl;
    }
       
    return 0;
}