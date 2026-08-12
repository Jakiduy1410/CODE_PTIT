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
        //map<int,int> mp;
        vector<int> a(n), b(m), c(k);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for(int i = 0 ; i < m ; i++)
        {
            cin >> b[i];
        }
        for(int i = 0 ; i < k ; i++)
        {
            cin >> c[i];
        }
        bool check = false;
        int i = 0 , j = 0 , x = 0;
        while (i < n  && j < m && x < k)
        {
            if (a[i] == b[j] && b[j] == c[x])
            {
                check = true;
                cout << a[i] << " ";
                i++; j++; x++;
            }
            else{
                int min_num = min(min(a[i],b[j]),c[x]);
                if (a[i] == min_num)
                {
                    i++;
                }
                if (b[j] == min_num)
                {
                    j++;
                }
                if (c[x] == min_num)
                {
                    x++;
                }
                
                
                
            }
        }
        
        if (!check)
        {
            cout << "NO";
        }
        
        cout << endl;
    }
    
}