#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        
        for(int mask = 0 ; mask < (1<<n) ; mask++)
        {
           int tmp = mask ^ (mask >> 1);

           string bin = bitset<10>(tmp).to_string();
           cout << bin.substr(10-n) << " ";
        }
        cout << endl;
    }
       
    return 0;
}