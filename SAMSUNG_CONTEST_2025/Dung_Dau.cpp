#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> a,b;
unordered_map<string,int> mp;

void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (mp[a[j]] == 0)
        {
            mp[a[j]] = 1;
            b.push_back(a[j]);
            if(i == n -1)
            {
                for(auto i : b) cout << i << " ";
                cout << endl;
            }
            else Try(i+1);
            b.pop_back();
            mp[a[j]] = 0;
        }
        
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    a.resize(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    string first;
    cin >> first;
    sort(a.begin() , a.end());
    b.push_back(first);
    mp[first] = 1;
    Try(1);
    return 0;
}