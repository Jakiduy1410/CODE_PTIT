#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int res_1 = 0 , res_2 = 0;
        if (k <= n / 2)
        {
            long long sum_1 = 0, sum_2 = 0;

            for (int i = 0; i < n; i++)
            {
                if (i < k)
                {
                    sum_1 += a[i];
                }
                else
                    sum_2 += a[i];
            }
            res_1 = abs(sum_1 - sum_2);
        }
        else{
            int min = (k , n - k);
            long long sum1_1 = 0 , sum2_2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (i < min)
                {
                    sum1_1 += a[i];
                }
                else sum2_2 += a[i];
                
            }
            res_2 = abs(sum2_2 - sum1_1);

        }
        cout << max(res_1,res_2) << endl;
    }
}