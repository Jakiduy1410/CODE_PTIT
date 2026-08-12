#include <bits/stdc++.h>
using namespace std;
int n,k;
string tmp;
vector<string> res;
bool Check()
{
    string gen_a = string(k,'A');
    size_t pos = 0;

    int cnt = 0;
    while ((pos = tmp.find(gen_a,pos)) != string::npos)
    {
        cnt++;
        pos++;
    }
    if (cnt == 1)
    {
        return true;
    }
    return false;
    
}

void Save()
{
   res.push_back(tmp);
}

void Try(int i)
{
    for(char c = 'A' ; c <= 'B' ; c++)
    {
        tmp.push_back(c);
        if (i == n)
        {
            if (Check())
            {
                Save();
            }
        }
        else Try(i+1);
        tmp.pop_back();
        
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;  
    Try(1); 
    cout << res.size() << endl;
    for(auto i : res) cout << i << endl;
    return 0;
}