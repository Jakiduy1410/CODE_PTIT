#include<iostream>
#include<string>

using namespace std;
int Check(string s)
{
    long long le = 0 , chan = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(i % 2 == 0) chan += (s[i] - '0');
        else le += (s[i] - '0');
    }
    return (chan - le) % 11 == 0;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (Check(s))
        {
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    
}