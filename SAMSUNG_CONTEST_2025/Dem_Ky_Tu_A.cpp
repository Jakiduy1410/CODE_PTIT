#include <bits/stdc++.h>
using namespace std;
long long f[93];
long long countA[93];

void Fib()
{
    f[0] = f[1] =  1;
    countA[0] = 1;
    countA[1] = 0;
    for(int i = 2 ; i <= 92 ; i++)
    {
        f[i] = f[i-1] + f[i-2];
        countA[i] = countA[i-1] + countA[i-2];
    }
}

int Count(int n, int k)
{
    if(n == 0) return 1;
    if(n == 1) return 0;

    if (k <= f[n-1])
    {
       return Count(n-1,k);
    }
    else{
        return countA[n-1] + Count(n-2, k - f[n-1]);
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Fib();
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        cout << Count(n,k) << endl;
    }
       
    return 0;
}