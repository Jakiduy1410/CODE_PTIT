#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            bool find = false;
            for (long long j = 0; j < n; j++)
            {
                if (i == a[j])
                {
                    b.push_back(i);
                    find = true;
                    break;
                }
            }
            if (!find)
            {
                b.push_back(-1);
            }
        }
            for (auto i : b)
            {
                cout << i << " ";
            }
            cout << endl;
    }
}
