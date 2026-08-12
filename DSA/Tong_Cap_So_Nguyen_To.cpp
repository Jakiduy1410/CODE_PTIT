#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
int p[MAX];
void sieve()
{
    for (int i = 0; i <= MAX; i++)
        p[i] = 1;
    p[1] = p[0] = 0;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                p[j] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        sieve();
        int n;
        cin >> n;
        bool found = false;
        for(int i = 2 ; i <= n / 2 ; i++)
        {
            if (p[i])
            {
                int check = n - i;
                if (p[check])
                {
                    cout << i << " " << check;   
                    found = true;
                    break;             
                }
                
                
            }
            
        }
        if (!found)
        {
            cout << "-1";
        }
        
        cout << endl;
    }

    return 0;
}