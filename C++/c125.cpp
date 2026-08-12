#include<iostream>
using namespace std;

int p[1000000];
void seive(int b)
{
   for (int i = 0; i <= b; i++)
   {
    p[i] = 1;
   }
   p[0] = p[1] = 0;
   for (int i = 2; i*i <= b; i++)
   {
    if (p[i])
    {
        for( int j = i*i ; j <= b ; j += i)
        {
            p[j] = 0;
        }
    }
    
   }
   
}
int main()
{
    int a,b;
    cin >> a >> b;
    if ( a > b) swap(a,b);
    seive(b);
    for ( int i = a ; i <= b ; i++)
    {
        if(p[i]) cout << i << " ";
    }
  return 0;
}