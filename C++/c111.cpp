#include<iostream>
using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        
        cin >> s;
        int count = 0;
    
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] + 1 == s[i+1] )
            {
                count++;
            }
            else if (s[i] - 1 == s[i+1]) count++;
        }
        if(count == s.size() - 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}