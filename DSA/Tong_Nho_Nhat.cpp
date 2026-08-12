#include<bits/stdc++.h>

using namespace std;

void Solve(vector<int> a)
{
    string num_1,num_2;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if (i % 2 == 0)
        {
            num_1 += to_string(a[i]);
        }
        else num_2 += to_string(a[i]);
    }
    cout << stoll(num_1) + stoll(num_2) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin(),a.end());
        Solve(a);
    }
    
}