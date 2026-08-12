#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
vector<int> b;
int cnt = 0;
vector<vector<string>> res;

bool Cmp(const vector<string> &a , const vector<string> &b)
{
    if (a.size() != b.size())
    {
        return a.size() < b.size();
    }
    else return a < b;
    
}


void Try(int i , int sum)
{
 if (sum == k)
 {
    vector<string> temp;
    for(int j = 0 ; j < b.size() ; j++)
    {
        temp.push_back(to_string(b[j]));
    }
    res.push_back(temp);
    cnt++;
    //cout << endl;
    return;
 }

 if (i == n || sum > k)
 {
    return;
 }

 b.push_back(a[i]);
 Try(i+1 , sum + a[i]);

 b.pop_back();
 Try(i+1,sum);
 
 
}

int main()
{
    cin >> n >> k;
    a.resize(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a.begin() , a.end());
    Try(0,0);
    sort(res.begin() , res.end(), Cmp);
    for(auto i : res)
    {
        for(int j = 0 ; j < i.size() ; j++)
        {
            cout << i[j] << " ";
        }
        cout << endl;
    }
    cout << cnt;
}