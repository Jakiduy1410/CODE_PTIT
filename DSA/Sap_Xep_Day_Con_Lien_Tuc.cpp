#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int l = 1, r = n;
        while (l < n && a[l] <= a[l + 1])
            l++;
        while (r > 1 && a[r - 1] <= a[r])
            r--;

        int min_num = INT_MAX , max_num = INT_MIN;
        for (int i = l; i <= r; i++)
        {
            min_num = min(min_num, a[i]);
            max_num = max(max_num, a[i]);
        }
        int s = l ,e = r;
        for(int i = l ; i >= 1 ; i--)
        {
           if (a[i] > min_num)
           {
            s = i;
           }
           else break;
               
        }
        for(int i = r ; i <= n ; i++)
        {
            if (a[i] < max_num)
            {
                e = i;
            }
            else break;
            
        }
        cout << s << " " << e ;
            
        cout << endl;
    }

    return 0;
}