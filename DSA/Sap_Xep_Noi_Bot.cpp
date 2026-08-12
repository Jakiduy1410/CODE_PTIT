#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   
    int cnt = 1;
    bool swap1;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        swap1 = false;
     
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if (a[j] > a[j+1])
            {
                swap1 = true;
                swap(a[j],a[j+1]);
            }
        }
            if (!swap1)
            {
                break;
            }
            cout << "Buoc " << cnt << ": ";
            for(auto i : a) cout << i << " ";
            cout << endl;
            cnt++;
            
    }
       
    return 0;
}