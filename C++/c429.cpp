#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,b;
    cin >> n >> k >> b;
    vector<int> a(n+1,0);
    for(int i = 0 ; i < b ; i++)
    {
      int x;
      cin >> x;
      a[x] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
        }
    }
    //int d  = k;
    int ans = cnt;
    for (int i = k+1; i <= n; i++)
    {
        if (a[i-k] == 1)
        {
            cnt--;
        }
        if (a[i] == 1)
        {
            cnt++;
        }
        ans = min(ans, cnt);
        
        
    }
    cout << ans << endl;
    
}