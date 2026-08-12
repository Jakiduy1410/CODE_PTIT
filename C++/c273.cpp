#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        
        if (sum % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        
        long long prefix = 0;
        int mid = -1;

        for (int i = 0; i < n; i++)
        {
            if (prefix == sum - prefix - a[i])
            {
                mid = i+1;
                break;
            }
            prefix += a[i];
            
        }
        
        cout << mid << endl;
         
    
        
    }
    
}