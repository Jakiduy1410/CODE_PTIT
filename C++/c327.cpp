#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int Binary(string s)
{
    int sum = 0;
    
    for(int i = 0 ; i < s.size() ; i++)
    {
        sum = sum * 2 + (s[i] - '0');
    }
    return sum % 5 == 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (Binary(s))
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    
}