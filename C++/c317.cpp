#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool Reserve(string s)
{
    string a = s; 
    reverse(a.begin(), a.end()); 
    return s == a; 
}

int main()
{
    int t;
    cin >> t; 
    while (t--) {
        int d[200] = {0};
        string s;
        cin >> s;

        bool check = true;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] != '0' && s[i] != '2' && s[i] != '4' && s[i] != '6' && s[i] != '8')
            {
                check = false;
                break;
            }
        }
        if(check && Reserve(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}