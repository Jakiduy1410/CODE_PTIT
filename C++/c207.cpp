#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,d;
        cin >> n >> d;
        int a[n+5], b[n+5];
        for(int i = 1; i <= n ; i++) cin >> a[i];

        int count = 1;
        for(int i = d+1 ; i <= n ; i++) b[count++] = a[i];
        for(int i = 1 ; i <= d; i++ ) b[count++] = a[i];

        for(int i = 1; i < count ; i++) cout << b[i] << " ";
        cout << endl;
    }
}