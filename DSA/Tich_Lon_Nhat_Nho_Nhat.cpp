#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> a(n) , b(m);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int j = 0 ; j < m ; j++) cin >> b[j];
        long long max_num = *max_element(a.begin(), a.end()); 
        long long min_num = *min_element(b.begin(),b.end());
        long long res = max_num * min_num;
        cout << res << endl;
    }
       
    return 0;
}