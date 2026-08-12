#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a, b;

void Try(int i , int start)
{
    for(int j = start ; j < a.size() ; j++)
    {
        b.push_back(a[j]);
        if (i == k)
        {
            for(int x = 0 ;  x < b.size() ; x++) cout << b[x] << " ";
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    int pos = unique(a.begin(), a.end()) - a.begin();

    a.erase(a.begin() + pos, a.end());
    Try(1,0);
}