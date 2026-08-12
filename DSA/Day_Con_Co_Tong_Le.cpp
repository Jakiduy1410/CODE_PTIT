#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<string> tmp;
set<vector<string>> res;

bool Cmp(const string &a , const string &b)
{
    return stoi(a) > stoi(b);
}

void Try(int i ,int sum)
{
    if (i == n)
    {
        
        if (sum % 2 == 1 && !tmp.empty()) 
        {
            vector<string> c = tmp;
            sort(c.begin() , c.end() , Cmp);
            res.insert(c);
        }
        return; 
    }

    tmp.push_back(to_string(a[i]));
    Try(i+1 , sum + a[i]);
    
    tmp.pop_back();
    Try(i + 1 , sum);
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        a.clear();
        cin >> n;
        a.resize(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        res.clear();
        tmp.clear();
        Try(0,0);
        //sort(res.begin() , res.end());
        for(auto i : res)
        {
            for(int j = 0 ; j < i.size() ; j++)
            {
                cout << i[j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    

    return 0;
}