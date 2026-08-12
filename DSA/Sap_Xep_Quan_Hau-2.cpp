#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int b[10][10];
int row[10], col[10], chinh[14], phu[14];
vector<int> tmp;
vector<vector<int>> res;
vector<pair<int,int>> pos;
int maxnum;

void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (!row[j] && !chinh[i - j + 8] && !phu[i + j])
        {
            row[j] = chinh[i - j + 8] = phu[i + j] = 1;
            tmp.push_back(a[i][j]);
            pos.push_back({i,j});
            if (i == 8)
            {
                int sum = 0;
                for(auto i : tmp) sum += i;
                if (sum > maxnum)
                {
                    maxnum = sum;
                    for(auto &[i,j] : pos)
                    {
                        b[i][j] = 1;
                    }
                }
                
            }
            else
                Try(i + 1);

            tmp.pop_back();
            pos.pop_back();
            row[j] = chinh[i - j + 8] = phu[i + j] = 0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> a[i][j];
            }
        }
        memset(b,0,sizeof b);
        memset(row, 0, sizeof(row));
        memset(chinh, 0, sizeof chinh);
        memset(phu, 0, sizeof phu);
        maxnum = 0;
        Try(1);
        cout << maxnum << endl;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (b[i][j] == 0)
                {
                    cout << ".";
                }
                else cout << "Q";
                
            }
            cout << endl;
        }
    }
    return 0;
}