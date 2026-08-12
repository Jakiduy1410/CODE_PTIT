#include <bits/stdc++.h>
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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int left = 0, right = n - 1, cnt = 0;
        while (left < right)
        {

            if (a[left] < a[right])
            {
                a[left+1] += a[left];
                left++;
                cnt++;
            }
            else if (a[right] < a[left])
            {
                a[right-1] += a[right] ;
                right--;
                cnt++;
            }
            else if (a[left] == a[right])
            {
                left++;
                right--;
            }
        }

        cout << cnt << endl;
    }
}