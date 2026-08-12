#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+5];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int j = 1;
        int i = 0;
        while (i < n)
        {
            if (a[i] > 0)
            {
                if( j == a[i]) j++;
               
            }
            i++;
        }
        
        cout << j << endl;
    }
    return 0;
}