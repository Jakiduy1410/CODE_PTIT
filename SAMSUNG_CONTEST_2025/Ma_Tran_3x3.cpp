#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    int cnt = 0;
    for(int x11 = 1 ; x11 < min(a,d) ; x11++)
    {
        for(int x12 = 1 ; x12 < min(a - x11,e) ; x12++)
        {
            for(int x21 = 1; x21 < min(b,d - x11) ; x21++)
            {
                for(int x22 = 1 ; x22 < min(b - x21,e - x12) ; x22++)
                {
                    int x13 = a - x12 - x11;
                    int x23 = b - x21 - x22;
                    int x31 = d - x11 - x21;
                    int x32 = e - x12 - x22;
                    int x33 = c - x31 - x32;
                    if(x33 + x23 + x13 != f) continue;
                    if(x13 > 0 && x23 > 0 && x31 > 0 && x32 > 0 && x33 > 0)
                    {
                        cnt++;
                    }
                }
            }
        }
    }   
    cout << cnt << endl;
    return 0;
}