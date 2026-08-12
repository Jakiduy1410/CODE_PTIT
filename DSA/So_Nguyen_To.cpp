#include <bits/stdc++.h>
using namespace std;
int n,p,s;
vector<vector<int>> res;
vector<int> a;
int snt(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for(int i = 2 ; i * i <= n ; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

void Try(int i , int p , int n)
{
    if (n == 0 && i == s)
    {
        res.push_back(a);
        return;
    }
    if (i == s || n < 0 || p > n )
    {
        return;
    }
    
    if (snt(p))
    {
        a.push_back(p);
        Try(i+1,p+1,n-p);
        a.pop_back();

        Try(i,p+1,n);
    }
    else Try(i,p+1,n);
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s >> p >> n;
        a.clear();
        res.clear();
        Try(0, p+1,n);
        cout << res.size() << endl;
        for(auto i : res)
        {
            for(int j = 0 ; j < i.size() ; j++)
            {
                cout << i[j] <<" ";
            }
            cout << endl;
        }

    }
       
    return 0;
}