#include<bits/stdc++.h>

using namespace std;

vector<int> money = {1000,500,200,100,50,20,10,5,2,1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        int i = 0;
        while (n != 0)
        {
            if (money[i] > n)
            {
              i++;
            }
            else
            {
                n -= money[i];
                cnt++;
            }
            
            
        }
        cout << cnt<< endl;
        
    }
    
}