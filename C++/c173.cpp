#include <bits/stdc++.h>
using namespace std;

long long lcm(int a, int b)
{
    return 1LL *  a * b / __gcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        long long bc = lcm(lcm(x, y), z);

        long long dau = pow(10, n - 1);
        long long cuoi = pow(10, n);

        long long res = ((dau + bc - 1) / bc) * bc;

        if (res < cuoi)
            cout << res << endl;
        else
            cout << -1 << endl;
    }
}