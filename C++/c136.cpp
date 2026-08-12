#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = sqrt(n);
        int cnt = 0;
        for (int i = 2; i < x; i++)
        {
            cnt++;
        }
        cout << cnt;
    }
}