#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> a;
int cnt;

void Check_Combination(int i, int x, vector<int> sample)
{
    for(int j = x ; j <= n - k + i ; j++)
    {
        a.push_back(j);
        if (i == k)
        {
            cnt++;
            bool check = true;
            for(int start = 0 ; start < k ; start++)
            {
                if (a[start] != sample[start])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cout << cnt << endl;
                return;
            }
        }
        else Check_Combination(i+1,j+1,sample);
        a.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> sample(k);
        for(int i = 0 ; i < k ; i++) 
            cin >> sample[i];  
        cnt = 0;
        a.clear();  
        Check_Combination(1, 1, sample);
    }
    return 0;
}