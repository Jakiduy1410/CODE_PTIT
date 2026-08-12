#include<bits/stdc++.h>

using namespace std;

int n,k,X[100];

void in()
{
    for(int i = 1 ; i <= k ; i++)
    {
        cout << X[i];
    }
    cout << " ";
}

void Try(int i ,int x)
{
    for(int j = x ; j <= n ; j++)
    {
        X[i] = j;
        if (i == k)
        {
            in();
        }
        else Try(i+1, j+1);
        
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        X[0] = 0;
        Try(1,1);
        cout << endl;
    }
    
}