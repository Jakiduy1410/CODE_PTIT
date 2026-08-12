#include<iostream>
using namespace std;

int Prime(int n)
{
    if ( n < 2) return 0;
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0) return 0;
    }
return 1;
}
int main()
{
    //Seive();
    int n;
    cin >> n;
    if (Prime(n))
    {
        cout << "YES";
    }
    else cout << "NO";
}