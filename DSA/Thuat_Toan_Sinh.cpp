#include<bits/stdc++.h>

using namespace std;

int n,X[100];



void in()
{
    for(int i = 1 ; i <= n ; i++) cout << X[i] << " ";
    cout << endl;
}

void Try(int i)
{
    for(int j = 0 ; j <= 1 ; j++)
    {
        X[i] = j;
        if (i == n)
        {
            string temp,a;
            for(int i = 1 ; i <= n ; i++)
            {   
                temp += to_string(X[i]);
            }
            a = temp;
            reverse(temp.begin(), temp.end());
            if (a == temp)
            {
                in();
            }
            
        }
        else Try(i+1);
        
    }
}


int main()
{
    cin >> n;
    Try(1);
}