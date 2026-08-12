#include <bits/stdc++.h>
using namespace std;

void Solve(int n)
{
    bool found = false;
    for(int i = (n / 7) ; i >= 0 ; i--)
    {
        int sum = n - (7*i);
        if (sum % 4 == 0)
        {
            int num4 = sum / 4;
            for(int j = 0 ;  j < num4 ; j++) cout << 4;
            for(int j = 0 ;  j < i; j++) cout << 7;
            found = true;
            break;
        }
        
    }
    if (!found)
    {
        cout << -1;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       Solve(n); 
       cout << endl;
    }
       
    return 0;
}