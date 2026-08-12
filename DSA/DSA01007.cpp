#include<bits/stdc++.h>
using namespace std;


vector<char> a = { 'A', 'B'};
int n;
vector<char> b;

void Try(int i)
{
    for(int j = 0 ; j < a.size() ; j++)
    {
        b.push_back(a[j]);
        if (i == n)
        {
            for(int i = 0 ; i < b.size() ; i++)
            {
                cout << b[i];
            }
            cout << " ";
        }
        else Try(i+1);
        b.pop_back();
        
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