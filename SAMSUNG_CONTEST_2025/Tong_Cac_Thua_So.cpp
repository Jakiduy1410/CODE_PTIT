#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 1;
int min_prime[MAX];
int max_prime[MAX];
long long prefix[MAX];
void Sieve()
{
    for (int i = 2; i <= MAX; i++)
    {
        if (max_prime[i] == 0)
        {
            for (int j = i ; j <= MAX; j += i)
            {
                max_prime[j] = i;
            }
        }
    }
}

void Pre()
{
    for(int i = 2 ; i <= MAX ; i++)
    {
        prefix[i] = prefix[i-1] + max_prime[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(max_prime , 0 , sizeof max_prime);
    Sieve();
    Pre();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = prefix[r] - prefix[l-1];
        cout << sum << endl;
    }

    return 0;
}