#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        int res  = 0;
        int pos = -1;
        for(int i = 0 ; i < s.size() ; i++)
        {
            char c = s[i];
            if (c == '[')
            {
                cnt++;
            }
            else if(c == ']')
            {
                if (cnt > 0)
                {
                    cnt--;
                }
                else{
                    for(int j = i + 1 ;  j < s.size() ; j++)
                    {
                        if (s[j] == '[')
                        {
                            pos = j;
                            break;
                        }
                        
                    }
                    res += (pos - i);
                    swap(s[i],s[pos]);
                    cnt = 1;
                }
                
                
            }
            
        }
        cout << res << endl;
    }
       
    return 0;
}