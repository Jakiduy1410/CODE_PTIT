#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n,m;
         cin >> n >> m;
         int a[n+5], b[m+5];
         long long max = -1000000000, min = 10000000000;
         for (int i = 0; i < n; i++)
         {
            cin >> a[i];
            if (a[i] > max) max = a[i];
         }
         for (int i = 0; i < m; i++)
         {
            cin >> b[i];
            if(b[i] < min) min = b[i];
         }
         long long res = max * min;
         cout << res << endl;
    }
    
}