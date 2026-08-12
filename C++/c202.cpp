#include <iostream>
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
        int a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());

        int check = 0;
        long long min = 1000000;
        for (int i = 0; i < n - 1; i++)
        {
            check = a[i] - a[i + 1];
            if (check < min)
                min = check;
        }
        cout << min << endl;
    }
}