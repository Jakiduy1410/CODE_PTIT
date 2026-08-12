#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
class Matrix
{
private:
    
public:
    int n;
    long long a[11][11];

    Matrix(int x)
    {
        n = x;
        memset(a , 0 , sizeof a);
    }

    Matrix operator*(Matrix A)
    {
        Matrix tmp(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    tmp.a[i][j] += (a[i][k] * A.a[k][j]) % MOD;
                    tmp.a[i][j] %= MOD;
                }
                
            }
            
        }
        return tmp;   
    }

    void Unit()
    {
        for (int i = 0; i < n; i++)
        {
            a[i][i] = 1;
        }
    }
};

Matrix Pow(int k , Matrix &A)
{
    Matrix res(A.n);
    res.Unit();
    while (k > 0)
    {
        if (k % 2 == 1)
        {
            res = res * A;
        }
        A = A*A;
        k/=2;
    }
    return res;
    
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        Matrix A(n);
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0  ; j < n ; j++)
            {
                cin >> A.a[i][j];
            }
        }
        Matrix Ans = Pow(k,A);
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0  ; j < n ; j++)
            {
                cout << Ans.a[i][j] << " ";
            }
            cout << endl;
        }
        
    }
       
    return 0;
}