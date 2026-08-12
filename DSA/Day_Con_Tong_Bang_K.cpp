#include<bits/stdc++.h>

using namespace std;


int n,k;
vector<int> a;
vector<string> res;
vector<int> b;
void Try(int pos, int sum)
{
  if (sum == k)
  {
    string temp;
    temp += "[";
    for(int j = 0 ; j < b.size() ; j++)
    {
        if (j > 0)
        {
            temp += " ";
        }
        temp += to_string(b[j]);
    }
    temp += "]";
    res.push_back(temp);
    return;
  }
  if (sum > k || pos == n)
  {
    return;
  }
  
  b.push_back(a[pos]);
  Try(pos + 1 , sum + a[pos]);
  
  b.pop_back();
  Try(pos + 1 , sum);
  
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        a.resize(n);
        res.clear();
        for(int i = 0 ; i < n ; i++ ) cin >> a[i];
        sort(a.begin(),a.end());
        Try(0,0);
        //sort(res.begin(), res.end());
        if (res.empty())
        {
            cout << "-1" << endl;
            continue;
        }
        
        for(auto i : res) cout << i << " ";
        cout << endl;
    }
    
}