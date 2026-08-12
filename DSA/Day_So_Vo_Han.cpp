#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

struct Matrix
{
    long long a[3][3] = {};

    void Don_vi()
    {
        a[1][1] = a[2][2] = 1;
    }

    Matrix operator*(Matrix tmp)
    {
        Matrix res;
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= 2; j++)
            {
                for (int k = 1; k <= 2; k++)
                {
                    res.a[i][j] += (a[i][k] * tmp.a[k][j]) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

long long Pow(long long n)
{
    Matrix f;
    f.a[1][1] = f.a[1][2] = f.a[2][1]= 1;
    Matrix res;
    res.Don_vi();
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            res = res * f;
        }
        f = f * f;
        n /= 2;
        
    }
    return res.a[1][2];
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << Pow(n) << endl;
    }
}