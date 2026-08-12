#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n,k;
vector<int> b;


void Try(int i , int start)
{
    for(int j = start ;  j < n ; j++)
    {
        b.push_back(a[j]);
        if (i == k - 1)
        {
            for(auto i : b) cout << i << " ";
            cout << endl;
        }
        else Try(i+1,j+1);
        b.pop_back();        
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a.resize(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin() , a.end());
        Try(0,0);
        cout << endl;
    }
       
    return 0;
}