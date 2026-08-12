#include <iostream>

using namespace std;

int Snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Check(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && Snt(i))
        {
            return i;
        }
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
        cout << 1 << " ";
        for (int i = 2; i <= n; i++)
        {
            
            cout << Check(i) << " ";
        }
        cout << endl;
    }
}