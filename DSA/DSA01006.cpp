#include<bits/stdc++.h>
using namespace std;
int n,X[100],check[100];

void in()
{
    for(int i = 1 ; i <= n ; i++)
    {
        cout << X[i];
    }
    cout << " ";
}

void Try(int i)
{
    if (i > n)
    {
        in();
    }
    else
    {
        for(int j = n ; j >= 1 ; j--)
        {
            if (!check[j])
            {
                X[i] = j;
                check[j] = 1;
                Try(i+1);
                check[j] = 0;
            }
            
        }
    }
    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      cin >> n;
      Try(1);   
      cout << endl;
    }
    
}