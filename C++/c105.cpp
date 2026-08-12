#include<iostream>
#include<string>
using namespace std;

int main()
{
  string s;
  int t; cin >> t;
  while (t--)
  {
      cin >> s;
      int check  = 0;
      for (int i = 0; i < s.size(); i++)
      {
        if(s[i] != '0' && s[i] != '8' && s[i] != '6' )
        {
            check = 1;
            break;
        }
      }
      if(check == 1) cout << "NO" << endl;
      else cout << "YES" << endl;
      
  }
  
}