#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin >> a >> b;
        bitset<32> bit_a(a);
        bitset<32> bit_b(b);

        unsigned long long num1 = bit_a.to_ullong();
        unsigned long long num2 = bit_b.to_ullong();

        long long res = num1 * num2;
        cout << res << endl;
    }
       
    return 0;
}