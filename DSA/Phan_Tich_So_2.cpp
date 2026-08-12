#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> res;
vector<int> tmp;

void Try(int n , int sum)
{
    if (sum == 0)
    {
        res.push_back(tmp);
        return;
    }
    if (sum < 0 || n  == 0)
    {
        return;
    }

    tmp.push_back(n);
    Try(n, sum - n);

    tmp.pop_back();
    Try(n-1, sum);
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        res.clear(); tmp.clear();
        Try(n,n);
        if (!res.empty())
        {
            cout << res.size() << endl;
            for(auto i : res)
            {
                cout << "(";
                for(int j = 0 ; j < i.size() ; j++)
                {   
                    if (j > 0 && j < i.size())
                    {
                        cout << " ";    
                    }
                    
                    cout << i[j];
                }
                cout << ") ";
            }
        }
        else cout << -1;
        cout << endl;
    }
       
    return 0;
}