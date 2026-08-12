#include<bits/stdc++.h>

using namespace std;

int Check(vector<int> a,int n , int k)
{
    set<int> s(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (s.count(a[i] +k))
        {
            return 1;
        }
        
    }

    return -1;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << Check(a,n,k) << endl;

        
        
        
    }
    
}