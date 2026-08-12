#include<bits/stdc++.h>

using namespace std;

int n;
vector<char> a = {'6' , '8'};
vector<char> b;

bool check()
{
  string temp;
  for (int i = 0; i < b.size(); i++)
  {
    temp += b[i];
  }

  if (temp.size() < 6)
  {
    return false;
  }
  if (temp.find("88") != string::npos)
  {
    return false;
  }
  if (temp[0] != '8' || temp.back() != '6')
  {
    return false;
  }
  if (temp.find("6666") != string::npos)
  {
    return false;
  }
  return true;
}

void in()
{
    for(int i = 0 ; i < b.size() ; i++)
    {
        cout << b[i] ;
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = 0; j < a.size(); j++)
    {
        b.push_back(a[j]);
        if (i == n)
        {
            if(check())
            {
                in();
            }
        }
        else Try(i+1);
        b.pop_back();
    }
    
}

int main()
{
  cin >> n;
  Try(1);
}