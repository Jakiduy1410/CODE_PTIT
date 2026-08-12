#include <iostream>
using namespace std;

long long Check(long long n)
{
    long long max = 2;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    long long i = 3;
    while (i * i <= n)
    {
        while (n % i == 0)
        {
            n /= i;
            max = i;
        }
        i += 2;
    }
    if (n > 1)
        max = n;
    return max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        cout << Check(a) << endl;
    }
}