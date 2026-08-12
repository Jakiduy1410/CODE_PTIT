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
        vector<int> a(n), b(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = 0 ; i < n ; i++) cin >> b[i];
        sort(a.begin() , a.end());
        sort(b.rbegin() , b.rend());
        long long sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            sum += 1LL * (a[i]*b[i]);
        }
        cout << sum << endl;
    }
       
    return 0;
}