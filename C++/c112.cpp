#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a,b,c,d;
        cin >> a >> b >> c >> d;
        double distance = sqrt((c - a) * (c - a) + (d - b) * (d - b));
        cout << setprecision(4) << fixed << distance << endl;
        
    }
    
}