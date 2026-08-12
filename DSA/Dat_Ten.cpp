#include<bits/stdc++.h>

using namespace std;
int n,k;
vector<string> a,b;

void Try(int i, int x)
{
    for(int j = x ; j < a.size() ; j++)
    {
      b.push_back(a[j]);
      if (i == k)
      {
        for(int i = 0 ; i < b.size() ; i++) cout << b[i] << " ";
        cout << endl;
      }
      else Try(i+1,j+1);
      b.pop_back();
      
    }
}

int main()
{
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin(),a.end());
    auto it = unique(a.begin(),a.end()) - a.begin();
    a.erase(a.begin() + it , a.end());
    Try(1,0);
    

}