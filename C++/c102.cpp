#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s;
    int t; cin >> t;
    while(t--)
    {
        // ...existing code...
        cin >> s;
        if (islower(s))
        {
            cout << char(toupper(s)) << endl;
        }
        else if (isupper(s)) cout << char(tolower(s)) << endl;
    }
}
