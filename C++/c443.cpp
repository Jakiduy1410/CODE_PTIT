#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n - 1);

        
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }

       
        int j = 1;
        while (j <= n)
        {
            bool found = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == j)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << j << endl;
                break;
            }
            j++;
        }
    }
    return 0;
}
