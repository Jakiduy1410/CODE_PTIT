#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
struct Matrix
{
    int n;
    long long a[11][11];

    Matrix(int x = 0)
    {
        n = x;
        memset(a, 0, sizeof(a));
    }

    friend istream &operator>>(istream &is, Matrix &A)
    {
        for (int i = 0; i < A.n; i++)
        {
            for (int j = 0; j < A.n; j++)
            {

                is >> A.a[i][j];
            }
        }
        return is;
    }
    friend ostream &operator<<(ostream &os, Matrix &A)
    {
        for (int i = 0; i < A.n; i++)
        {
            for (int j = 0; j < A.n; j++)
            {
                os << A.a[i][j] << " ";
            }
            os << endl;
        }
        return os;
    }
    Matrix operator*(const Matrix &tmp)
    {
        Matrix res(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    res.a[i][j] += (a[i][k] * tmp.a[k][j]);
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};

Matrix Pow(Matrix &A, int k, int n)
{
    Matrix res(n);
    for (int i = 0; i < n; i++)
    {
        res.a[i][i] = 1;
    }
    while (k > 0)
    {

        if (k % 2 == 1)
        {
            res = (res * A);
        }
        A = A * A;
        k /= 2;
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
        int n, k;
        cin >> n >> k;
        Matrix A(n);
        cin >> A;
        Matrix Ans = Pow(A, k, n);
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            res += (Ans.a[i][n - 1] % MOD);
        }
        cout << res % MOD << endl;
    }
    return 0;
}