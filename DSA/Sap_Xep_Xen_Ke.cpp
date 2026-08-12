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
        sort(a.begin(), a.end());
        int l = 0 , r = n - 1;
        while (l < r)
        {
            cout << a[r] << " " << a[l] << " ";
            l++;
            r--;
        }
        if (n % 2 == 1)
        {
            cout << a[l];
        }
        
        cout << endl;
        
    }
       
    return 0;
}