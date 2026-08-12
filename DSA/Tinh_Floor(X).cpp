#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        int tmp = 0;
        bool found = false;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            if (a[i] > x)
            {
                continue;
            }
            else if(a[i] <= x)
            {
                found = true;
                tmp = i+1;
            }
            
            
        }
        if (!found)
        {
            cout << "-1" << endl;
        }else  cout << tmp << endl;
    }
        
    return 0;
}
