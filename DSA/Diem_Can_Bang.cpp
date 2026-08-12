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
        vector<long long> a(n+1);
        vector<long long> prefix(n+1,0);
        prefix[0] = 0;
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i];
            prefix[i] = prefix[i-1] + a[i];
        }
        int l = 1;
        bool found = false;
        //for(auto i : prefix) cout << i << " ";
        //cout << endl;
        //cout << prefix[n];
         while (l <= n)
        {
            if (prefix[n] - prefix[l] == prefix[l+1])
            {
                cout << l + 1;
                found = true;
                break;
            }
            l++;
        }
        if (!found)
        {
            cout << "-1";
        }
        
        cout << endl;
    }
       
    return 0;
}