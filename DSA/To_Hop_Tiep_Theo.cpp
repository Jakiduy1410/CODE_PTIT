#include<bits/stdc++.h>
using namespace std;


int Check_Combination(int n , int k , vector<int> a)
{
    set<int> x(a.begin(), a.end());
    int cnt = 0;
    set<int> y;
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1)
    {
        i--;
    }
    if (i < 0)
    {
        return k;
    }
    else{
        a[i]++;
        y.insert(a[i]);
        for(int j = i+1 ; j < k ; j++)
        {
            a[j] = a[j-1] + 1;
            y.insert(a[j]);
        }
        for(auto i : y)
        {
            if (x.find(i) == x.end())
            {
                cnt++;
            }
            
        }
        return cnt;
        
    }
    
    
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(k);
        for(int i = 0 ; i < k ; i++) cin >> a[i];
        cout << Check_Combination(n,k,a) << endl;
    }
    
}