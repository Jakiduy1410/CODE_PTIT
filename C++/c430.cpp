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
        int n;
        cin >> n;
        vector<int> a(n);
        int min = 1000000;
        int max = -1000000;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] < min) min = a[i];
            if(a[i] > max) max = a[i];
        }
        sort(a.begin(), a.end());
        int j = min;
        int cnt = 0;
        while (j < max)
        {
            bool check = false;
            for (int i = 0; i < n; i++)
            {
                if(j == a[i])
                {
                    check = true;
                    continue;
                }
            }
            if (!check)
            {
                cnt++;
            }
            
            j++;
        }
        cout << cnt << endl;
    }
    
}