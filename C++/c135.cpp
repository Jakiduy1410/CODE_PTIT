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
int Check(int n)
{
  for(int i = 2; i*i <= n ; i++)
  {
    if (p[i])
    {
        cout << i*i << " ";
    }
    
  }
  return 0;
}
int main()
{
    int n;
    int t;
    cin >> t;
    seive();
    while (t--)
    { 
        cin >> n;
        Check(n);
        cout << endl;
    }
    
}