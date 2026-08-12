#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int x;
    cin >> x;
    for(auto i : a)
    {
        if (i == x)
        {
            continue;
        }
        else cout << i << " ";
        
    }
}