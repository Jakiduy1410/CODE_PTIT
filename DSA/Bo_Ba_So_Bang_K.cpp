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
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        sort(a.begin() , a.end());
        for(int i = 0 ; i < n - 2 ; i++)
        {
            int tmp = k - a[i];
            int l = i + 1 , r = n-1;
            while (l < r)
            {
                if (a[l] + a[r] < tmp)
                {
                    l++;
                }
                else if(a[l] + a[r] > tmp)
                {
                    r--;
                }
                else
                {
                    found = true;
                    break;
                }
                
            } 
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        
    }
       
    return 0;
}