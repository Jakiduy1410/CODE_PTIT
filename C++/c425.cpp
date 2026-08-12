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
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int left = 0;
        for (int i = 0; i < n; i++)
        {
            if( i % 2 == 0) 
            {
               b[i] = a[left++];
            }
        
        }
    
        for (int i = 0; i < n; i++)
        {
            if( i % 2 == 1) 
            {
               b[i] = a[left++];
            }
        
        }
    

        for(auto i : b)
        {
            cout << i << " ";
        }
        cout << endl;
        
        
    }
    
}