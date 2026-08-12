#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
class Matrix
{
private:
public:
    int n;
    long long a[4][4];

    Matrix(int x)
    {
        n = 2;
        memset(a, 0, sizeof a);
    }

    Matrix operator*(Matrix &A)
    {
        Matrix res(2);
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    res.a[i][j] += (a[i][k] * A.a[k][j]) % MOD;
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }

    void Start()
    {
        a[0][1] = a[1][0] = a[0][0] = 1;
    }
    void Unit()
    {
        a[0][0] = a[1][1] = 1;
    }
};

Matrix Fib(int n, Matrix &A)
{
    Matrix res(2);
    res.Unit();
    while (n > 0)
    {
        if (n % 2 == 1)
            res = res * A;
        A = A * A;
        n /= 2;
    }
    return res;
}

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
        Matrix A(2);
        A.Start();

        Matrix ans = Fib(n, A);
        cout << ans.a[0][1] << endl;
    }

    return 0;
}