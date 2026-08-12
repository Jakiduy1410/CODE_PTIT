#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> b;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                b.push_back(a[i]);
            }
            
        }
        while (b.size() < n)
        {
            b.push_back(0);
        }
        
        for(auto i : b)
        {
            cout << i << " ";
        }
        cout << endl;


    }
    
}