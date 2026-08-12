#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (k > n)
        {
            cout << 0;
            return 0;
        }

        long long res = 1;

        for (int i = 0; i < k; i++)
        {
            res *= (n - i);
            res %= MOD;
        }

        cout << res << endl;
    }
    return 0;
}