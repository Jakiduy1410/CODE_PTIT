#include <iostream>
using namespace std;

int Prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int Check(int n, int k)
{
    int i = 2; 
    int x = 0;
    while (i <= n)
    {
        while(n % i == 0 && Prime(i))
        {
            x++;
            if (x == k)
            {
                return i;
            }
            n /= i;
        }
        i++;
    }

    
    return -1;
}
int main()
{
    int n, k;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> k;
        cout << Check(n, k) << endl;
    }
}