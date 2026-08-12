#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n /= i;
                count++;
            }
            cout << count << endl;
        }
        count = 0;
        
    }
    if (n > 1)
    {
        cout << n << " ";
        count ++;
        cout << count;
    }
}