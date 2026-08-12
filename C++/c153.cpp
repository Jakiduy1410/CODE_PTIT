#include<iostream>
using namespace std;

int Calc(int n,int k)
{
  int sum = 0;
  for(int i = 1; i <= n ; i++)
  {
    sum += i % k;
  }
  return sum;
}

int main()
{
    long long n,k,t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << Calc(n,k) << endl;
        
    }
    
}