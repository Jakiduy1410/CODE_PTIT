#include <iostream>
using namespace std;

long gcd(long a, long b)
{
    while (b != 0)
    {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        long bcnn = 1;
        for (long i = 1; i <= n; i++)
        {
            bcnn = i * bcnn/ gcd(i, bcnn);
        }
        cout << bcnn << endl;
    }
}