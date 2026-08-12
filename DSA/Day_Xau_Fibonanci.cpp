#include <bits/stdc++.h>
using namespace std;

long long fibo[93];
void fib()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}

char Solve(long long n, long long k)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (k <= fibo[n-2])
    {
        return Solve(n - 2 , k);
    }
    else return Solve(n - 1 ,k-fibo[n-2]);
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fib();
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << Solve(n, k) << endl;
    }

    return 0;
}