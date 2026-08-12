#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<int> X;

void in(int cnt)
{
    int res;
    res = count(X.begin() , X.end() , 1);
    if (res == cnt)
    {
        for (int i = 0; i < X.size(); i++)
        {
            cout << X[i];
        }
        cout << endl;
    }
     
}

void Try(int i , int cnt)
{
    for(int j = 0 ; j <= 1 ; j++)
    {
        X.push_back(j);
        if (i == n)
        {
            in(cnt);
        }
        else Try(i+1,cnt);
        X.pop_back();
        
    }
}

int main()
{
 int t;
 cin >> t;
 while (t--)
 {
    cin >> n >> k;
    Try(1,k);
    X.clear();
 }
 
}