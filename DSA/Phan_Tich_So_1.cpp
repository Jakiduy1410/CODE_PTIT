#include <bits/stdc++.h>
using namespace std;
string tmp;
vector<string> res;
int n;

void Try(int i , int sum)
{
    if (sum == 0)
    {
        res.push_back(tmp);
        return;
    }
    if (i == 0 || sum < 0)
    {
        return;
    }
    
    tmp += to_string(i) + " ";
    Try(i, sum - i);
    tmp.erase(tmp.size() - (to_string(i).size() + 1));

    Try(i-1,sum);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        tmp.clear();
        cin >> n;
        Try(n,n);
        for(auto i : res)
        {
            cout << "(";
            for(int j = 0 ; j < i.size() - 1 ; j++)
            {
                cout << i[j];
                
            } 
            cout << ") ";
        }
        cout << endl;
    }
       
    return 0;
}