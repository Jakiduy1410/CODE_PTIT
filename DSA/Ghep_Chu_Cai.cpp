#include <bits/stdc++.h>

using namespace std;

char c;
vector<char> b;
int n;
bool check[26];

bool Test()
{
  string temp = string(b.begin(),b.end());
  if (temp.find("AE") != string::npos || temp.find("EA") != string::npos)
  {
    return true;
  }
  
  int a = count(b.begin() + 1 , b.end() - 1,'A');
  int e = count(b.begin() + 1 , b.end() - 1,'E');
  if (a > 0 || e > 0)
  {
    return false;
  }
  return true;
    
}


void Try(char c, int i)
{
    if (i > n)
    {
        if (Test())
        {

            for (int i = 0; i < b.size(); i++)
                cout << b[i];
            cout << endl;
        }
    }
    else
    {
        for (char j = 'A'; j <= c; j++)
        {
            if (!check[j])
            {
                b.push_back(j);
                check[j] = true;
                Try(c, i + 1);
                check[j] = false;
                b.pop_back();
            }
        }
    }
}

int main()
{
    cin >> c;
    n = c - 'A' + 1;
    Try(c, 1);
}