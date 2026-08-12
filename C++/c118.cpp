#include <bits/stdc++.h>
using namespace std;

bool isSphenic(int n) {
    int cnt = 0;
    int dem = 0;
    

  
    if (n % 2 == 0) {
        cnt = 0;
        while (n % 2 == 0) {
            cnt++;
            n /= 2;
        }
        if (cnt > 1) return false; 
        dem++;
     
    }

    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (cnt > 1) return false; 
            dem++;
            
        }
    }

    
    if (n > 1) {
        dem++;
    }

    return (dem == 3);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (isSphenic(a)) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}