#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                b.push_back(a[i][j]);
            }
            
        }
        sort(b.begin(),b.end());
        for(auto i : b)
        {
            cout << i << " ";
        }
        cout << endl;

    }
    
}