#include<vector>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,cnt = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       
        for (int i = 0; i < n; i++)
        {
            if(a[i] == k)
            {
                cnt++;
            }
        }
        if (cnt > 0)
        {
                cout << cnt << endl;
        }
        else cout << "-1" << endl;
    }
    
}