#include <iostream>
using namespace std;
long long F[1000];
const int MOD = 1e9 + 7;
void Fibo(int n)
{
    F[0] = 0;
    F[1] = F[2] = 1;
    for (int i = 3; i <= 1000; i++)
    {
        F[i] = (F[i - 1] + F[i - 2] ) % MOD;
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Fibo(n);
        
        cout << F[n] << endl;
    }
    
}