#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x,y,p;
        cin >> x >> y >> p;
        long long sum = 1;
        while (y--)
        {
            sum = (x * sum) % p;
        }
        cout << sum << endl;
    }
    
}