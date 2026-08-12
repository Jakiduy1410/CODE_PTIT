#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        long long sum = n*(n + 1) / 2;
        cout << sum << endl;
    }
    
}