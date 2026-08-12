#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long Pow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = Pow(a, b / 2);
    if (b % 2 == 1)
        return (res * res) % MOD * a % MOD;
    else
        return (res * res) % MOD;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;

    while (cin >> a >> b)
    {

        if (a == 0 && b == 0)
            break;

        cout << Pow(a, b) << '\n';
    }
    return 0;
}
