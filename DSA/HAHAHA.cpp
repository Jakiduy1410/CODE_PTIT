#include<bits/stdc++.h>
using namespace std;

int n;
vector<char> a{'H', 'A'};
vector<char> b;
vector<string> res;

void in()
{
    if (b.back() == 'A' && b[0] == 'H')
    {
        string temp;
        for(int i = 0 ; i < b.size() ; i++)
        {
            temp += b[i];
        }
        res.push_back(temp);
    }  
    
    
}

void Try(int i)
{
    for(int j = 0 ; j < a.size() ; j++)
    {
        if (!b.empty() && b.back() == 'H' && a[j] == 'H')
        {
            continue;
        }
        
        b.push_back(a[j]);
        if (i == n)
        {
            in();
        }
        else Try(i+1);
        b.pop_back();
        
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        sort(res.begin() , res.end());
        for(auto i : res) cout << i << endl;
        res.clear();
    }
    
}