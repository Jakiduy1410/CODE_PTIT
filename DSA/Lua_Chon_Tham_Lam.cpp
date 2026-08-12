#include <bits/stdc++.h>
using namespace std;

string Min_Num(int n, int s)
{
    string tmp;
    int sum = s;
    for (int i = 1; i <= n; i++)
    {
        int start;
        if (i == 1)
            start = 1;
        else
            start = 0;
        for (int j = start; j <= 9; j++)
        {
            int remain_sum = sum - j;
            if (remain_sum >= 0 && remain_sum <= 9 * (n - i))
            {
                tmp += to_string(j);
                sum -= j;
                break;
            }
        }
    }
    if (tmp.size() == n)
    {
        return tmp;
    }
    else return "-1";
}

string Max_Num(int n, int &s)
{
     string tmp;
     int sum = s;
    for (int i = 1; i <= n; i++)
    {
        int end;
        if (i == 1)
        {
            end = 1;
        }
        else end = 0;
        
        for (int j = 9; j >= end; j--)
        {
            int remain_sum = sum - j;
            if (remain_sum >= 0 && remain_sum <= 9 * (n - i))
            {
                tmp += to_string(j);
                sum -= j;
                break;
            }
        }
    }
    if (tmp.size() == n)
    {
        return tmp;
    }
    else return "-1";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    cin >> n >> s;
    cout << Min_Num(n, s) << " " << Max_Num(n,s);

    return 0;
}