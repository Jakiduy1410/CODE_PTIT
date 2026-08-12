#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        unordered_map<int, int> d;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            d[a[i]]++;
            if (d[a[i]] > 1) 
            {
                cout << a[i] << endl; 
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "-1" << endl; 
        }
    }

    return 0;
}