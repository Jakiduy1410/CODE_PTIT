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
        for (int i = 0; i < s.size(); i++)
        {
            a.push_back(s[i]);
            if (a.size() >= 3 && a[a.size() - 3] == '0' && a[a.size() - 2] == '8' && a[a.size() - 1] == '4')
            {
                a.erase(a.size() - 3);
            }
            
        }
        cout << a << endl;
        a.erase();
        
    }
    
}