#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 10];
        int check = 0;
        long long min = 1000000000;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {

            check = abs(a[i] - a[i + 1]);
            if (check < min)
                min = check;
        }
        cout << min << endl;
    }
}