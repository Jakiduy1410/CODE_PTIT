#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    long long a, b;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b);
        cout << endl;
    }
}