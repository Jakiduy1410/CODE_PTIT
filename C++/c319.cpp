#include<iostream>
#include<cmath>

using namespace std;

string Min(int m , int s)
{
    if (s == 0) {
        if (m == 1) return "0";
        else return "-1";
    }
    if (s > 9 * m) return "-1";
    string res;
    int sum = s;
    for (int i = 0; i < m; i++)
    {
        for (int d = (i == 0 ? 1 : 0); d <= 9; d++)
        {
            if (sum - d >= 0 && sum - d <= 9 * (m - i - 1))
            {
                res += char(d + '0');
                sum -= d;
                break;
            }
        }
    }
    return res;
}

string Max(int m , int s)
{
  if (s == 0) {
        if (m == 1) return "0";
        else return "-1";
    }
    if (s > 9 * m) return "-1";
    string res;
    int sum = s;
    for(int i = 0 ; i < m ; i++)
    {
      for(int d = 9 ; d >= 0 ; d--)
      {
        if(sum - d >= 0 && sum - d <= 9* (m-i-1))
        {
          res += char(d + '0');
          sum -= d;
          break;
        }
      }
    }
    return res;
}
int main()
{
    int m,s;
    cin >> m >> s;
    cout << Min(m,s) << " " << Max(m,s);

}