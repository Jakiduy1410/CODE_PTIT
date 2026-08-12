#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,a;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            a.push_back(s[i]);
        }
        if (s == a)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        a.erase();
        
    }
    
}