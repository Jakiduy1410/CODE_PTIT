#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<char> a;

void Try(int i , char x)
{
    for(char j = x ; j <= 'A' + n - 1; j++)
    {
        a.push_back(j);
        if (i == k)
        {
            for(int i = 0 ; i < a.size() ; i++) cout << a[i];
            cout << endl;
        }
        else
        {
            Try(i+1 , j+1);
        }
        a.pop_back();
        
        
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a.clear();
        Try(1,'A');
    }
    
}