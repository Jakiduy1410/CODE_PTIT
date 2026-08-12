#include <iostream>
using namespace std;

int main()
{
    long long a;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        while (a % 2 == 0)
        {
            cout << "2 " ;
            a /= 2;
        }
        for ( int i = 3; i*i <= a ; i += 2)
        {
            while( a % i == 0)
            {
                cout << i << " ";
                a /= i;
            }
        }
        if ( a > 1) cout << a;
        cout << endl;
    }
}