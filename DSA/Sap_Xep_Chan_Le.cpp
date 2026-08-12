#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    //vector<long long> a(n+1);
    vector<long long> c,l;
    for(int i = 1 ; i <= n ; i++)
    {
        long long x;
        cin >> x;
        if (i % 2 == 0)
        {
            c.push_back(x);
        }
        else l.push_back(x);
        
        
    }   
    sort(c.begin(),c.end(),greater<int>());
    sort(l.begin(),l.end());
    int i = 0 , j = 0;
    while (i < c.size())    
    {
        cout << l[i] << " " << c[i] << " ";
        i++;
    }
    if (n%2==1)
    {
        cout << l[i];
    }
    
    
    return 0;
}