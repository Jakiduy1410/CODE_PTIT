#include<iostream>
using namespace std;

int Sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    
    while (sum > 9)
    {
        int res = sum;
        sum = 0;
        while(res != 0)
        {
            sum += res % 10;
            res /= 10;
        }
    }
    return sum;
}

int main()
{
    int n;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int res = Sum(n);
        int check = 0;
        
        cout << Sum(n) << endl;

    }
    
}