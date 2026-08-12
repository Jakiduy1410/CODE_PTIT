#include <bits/stdc++.h>
using namespace std;

string Solve(int &s , int n)
{
    string tmp;
    for(int i = 1; i <= n ; i++)
    {
        int start;
        if(i == 1) start = 1;
        else start = 0;
        for(int j = start ; j <= 9 ; j++)
        {
            int remain_sum = s - j;
            if (remain_sum >= 0 && remain_sum <= 9*(n-i))
            {
                tmp += to_string(j);
                s -= j;
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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int s,n;
        cin >> s >> n;
        cout << Solve(s,n) << endl;
    }
       
    return 0;
}