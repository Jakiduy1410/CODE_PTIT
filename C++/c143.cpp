#include <iostream>
using namespace std;
long long fibo[1000000];
void Fibonaci()
{
    fibo[1] = fibo[2] = 1;
    for (int i = 3; i <= 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    int a;
    int t;
    cin >> t;
    while (t--)
    {
        Fibonaci();
        cin >> a;
        cout << fibo[a] << endl;
    }
}