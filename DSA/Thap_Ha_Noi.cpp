#include <bits/stdc++.h>
using namespace std;

void Try(int n, char a, char b, char c) {
    if (n == 0) return;
    Try(n - 1, a, c, b);
    cout << a << " -> " << b << endl;
    Try(n - 1, c, b, a);
}

int main() {
  
    int n;
    cin >> n;
    Try(n, 'A', 'C', 'B');
    return 0;
}
