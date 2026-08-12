#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        
        for (int i = 0; i < n - 1; i++)
        {
            if(a[i] == a[i + 1])
            {
                int check = 1;
                while (i < n - 1 && a[i] == a[i + 1])
                {
                    check++;
                    i++;

                }
                cnt += check;
            }
        }
        cout << cnt << endl;
    }
}
