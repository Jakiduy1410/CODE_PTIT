#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n;

void InOrder(int i)
{
    if(i < n)
    {
        InOrder((2*i)+1);
        cout << a[i] << " ";
        InOrder((2*i)+2);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.clear();
        a.resize(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        InOrder(0);
        cout << endl;
    }
       
    return 0;
}