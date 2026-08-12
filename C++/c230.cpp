#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 5][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {

            if (a[i][j] == 1)
            {
                cnt++;
            }
            if( cnt > 3 / 2)
            {
                res++;
                cnt = 0;
            }
        }
    }
    cout << res;;
}