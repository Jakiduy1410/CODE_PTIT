#include<iostream>
using namespace std;
int p[1000001];
void seive()
{
    for(int i = 0 ; i <= 1000000 ; i++) p[i] = 1;
    p[1] = p[0] = 0;
    for(int i = 2 ; i*i <= 1000000 ; i++)
    {
        if(p[i])
        {
            for(int j = i*i ; j <= 1000000 ; j += i)
            {
                p[j] = 0;
            }
        }
    }
}

int Check (long long n)
{
    if(n < 4) return -1;
    
    for (int i = 2; i <= n; i++)
    {
        if(p[i] && p[n-i])
        {
           cout << i << " " << n-i;
           return 0;
            
        }
    }
    
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Check(n);
        cout << endl;
    }
    
}