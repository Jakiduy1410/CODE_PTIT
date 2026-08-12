#include <bits/stdc++.h>
using namespace std;

long long Solve(int k, int x)
{
    string tmp;
    while (x > 0)
    {
        tmp += to_string(x % k);
        x /= k;
    }
    reverse(tmp.begin(), tmp.end());
    return stoll(tmp);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b;
        cin >> k >> a >> b;
        long long op1 = Solve(k, a);
        long long op2 = Solve(k, b);
        long long ans = op1 + op2;
        //cout << ans << endl;
        long long res = 0;
        long long mu = 1;
        while (ans > 0)
        {
            int num = ans % 10;
            ans /= 10;
            // cout << num << " " << mu;
            // cout << endl;
            res = res + (num * mu);
            mu *= k;
        }
        cout << res << endl;
    }

    return 0;
}