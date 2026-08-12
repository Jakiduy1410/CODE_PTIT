#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == k)
            {
                found = true;
                cout << i+1 << endl;
                break;
            }
        }
        if(! found) cout << "NO" << endl;
    }
    
}