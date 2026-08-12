#include<iostream>
#include<algorithm>
#include<vector>

const int MOD = 10e9+7;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin(),a.end());
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] * i) % MOD;
        }
        cout << sum % MOD << endl;
        
    }
    
}