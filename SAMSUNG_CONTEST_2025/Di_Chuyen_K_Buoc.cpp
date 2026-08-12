#include <bits/stdc++.h>
using namespace std;

long long a[51][51];
const int MOD = 1e9 + 7;
long long k ;
int n, s, t;

class Matrix
{
private:
public:
    int size;
    long long a[51][51];

    Matrix(int x)
    {
        size = x;
        memset(a, 0, sizeof a);
    }

    friend istream &operator>>(istream &is, Matrix &A)
    {
        for (int i = 0; i < A.size; i++)
        {
            for (int j = 0; j < A.size; j++)
            {
                is >> A.a[i][j];
            }
        }
        return is;
    }

    friend ostream &operator <<(ostream &os, Matrix A)
    {
        os << A.a[s-1][t-1];
        return os;
    }
    Matrix operator*(const Matrix &A)
    {
        Matrix tmp(size);
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {
                    tmp.a[i][j] += (a[i][k] * A.a[k][j]) % MOD;
                    tmp.a[i][j] %= MOD;
                }
            }
        }
        return tmp;
    }

    void Donvi()
    {
        for (int i = 0; i < size; i++)
        {
            a[i][i] = 1;
        }
    }
};

Matrix Pow(Matrix &A, int k)
{
    Matrix res(n);
    res.Donvi();
    while (k > 0)
    {
        if (k % 2 == 1)
        {
            res = res * A;
        }
        A = A*A;
        k /= 2;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s >> t >> k;
    Matrix A(n);

    cin >> A;
    A = Pow(A,k);
    cout << A;
    return 0;
}