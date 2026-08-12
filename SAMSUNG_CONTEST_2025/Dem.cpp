#include <bits/stdc++.h>
using namespace std;
const int MAXN = 93;
long long f[MAXN];
long long countA[MAXN];

void Pre()
{
    f[0] = f[1] = 1;
    countA[0] = 1;
    countA[1] = 0;
    for (int i = 2; i < 93; i++)
    {
        f[i] = f[i-1] + f[i-2];
        countA[i] = countA[i-1] + countA[i-2];
    }
}

long long Count(int n, long long k)
{
    if(n == 0) return 1;
    if(n == 1) return 0;

    if (k <= f[n-1])
    {
        return Count(n-1,k);
    }
    else{
        return countA[n-1] + Count(n-2,k - f[n-1]);
    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    Pre();
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << Count(n,k) << endl;
    }
       
    return 0;
}