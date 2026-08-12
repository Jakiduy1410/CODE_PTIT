#include<bits/stdc++.h>
using namespace std;

int Check(int n, int s , int m)
{
    int rest = s / 7;
    if (n*(s - rest) < s*m)
    {
        return -1;
    }
    double res = ceil((s*1.0*m) / n);
    return res;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s,m;
        cin >> n >> s >> m;
        cout << Check(n,s,m) << endl;
    }
    
}