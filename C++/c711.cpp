#include <iostream>
#include <vector>
using namespace std;
int a[100], n, check;

void ktao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void nhiphan()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        check = 0;
    }
    else
    {
        a[i] = 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        check = 1;
        ktao();
        while (check)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] ;
            }
            cout << " ";

            nhiphan();
        }
        cout << endl;
    }
}