#include <iostream>
using namespace std;
int p[1000000];
void Seive(int n)
{
    for (int i = 0; i <= n; i++)
    {
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = 0;
            }
        }
    }
}

int main()
{
    int a, t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Seive(a);
        for (int i = 2; i <= a; i++)
        {
            if (p[i])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}