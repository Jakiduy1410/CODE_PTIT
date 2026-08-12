#include<iostream>
using namespace std;

int Calc(int n,int k)
{
  int sum = 0;
  for(int i = 1; i <= n ; i++)
  {
    sum += i % k;
  }
  if(sum == k) return 1;
  else return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        cout << Calc(n,k) << endl;
    }
    
}