#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        vector<long long> a(n) , b(m) , c(k);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(int i = 0 ; i < m ; i++) cin >> b[i];
        for(int i = 0 ; i < k ; i++) cin >> c[i];

        int i = 0 , j = 0 , p = 0;
        vector<long long> res;
        while (i < n && j < m && p < k)
        {
            if (a[i] == b[j] && b[j] == c[p])
            {
                res.push_back(a[i]);
                i++; j++; k++;
            }
            if(a[i] < b[j]) i++;
            else if(b[j] < c[p]) j++;
            else p++;
            
        }
        
        if (res.empty())
        {
            cout << "-1";
        }

        for(auto i : res)
        {
            cout << i << " ";
        }
        
        
        cout << endl;
    }
    
}