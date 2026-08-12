#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
      long long a;
      cin >> a;
      long long b = a % 100;
      
      if (b == 86)
      {
        cout << "1" << endl;
      }
      else cout << "0" << endl;
    }
}