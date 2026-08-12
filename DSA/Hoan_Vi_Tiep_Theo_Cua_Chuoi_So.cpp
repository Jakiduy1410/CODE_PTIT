#include <bits/stdc++.h>
using namespace std;
string s;
int n;

void Perm()
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i+1])
    {
        i--;
    }
    
    if (i < 0)
    {
        cout << n << " " << "BIGGEST" << endl;
    }
    else{
        int pos = 0;
        for(int j = s.size()-1 ; j >= i + 1 ; j--)
        {
            if (s[j] > s[i])
            {
                pos = j;
                break;
            }
        }
        swap(s[i],s[pos]);
        reverse(s.begin() + i + 1, s.end());
        cout << n << " " << s << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        Perm();
        
    }
       
    return 0;
}