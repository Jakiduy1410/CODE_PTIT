#include<iostream>
#include<cmath>
using namespace std;

int Check( int n)
{
    int res = 0;
    int chan = 0 , le = 0;
    while (n != 0)
    {
        res = n % 10;
        if (res % 2 == 0 ) chan++;
        else le++;
        n /= 10;
        res = 0;
    }
    if (chan == le) return 1;
    else return 0;
}

int main()
{
    int n;
    cin >> n; 
    int count = 0;
    for (int i = pow(10,n - 1); i <= pow(10,n); i++)
    {
        if (Check(i) == 1)
        {
            count++;
            cout << i << " ";
            if(count == 10 )
            {
                cout << endl;
                count = 0;
            }
        }
        
    }
    


}
