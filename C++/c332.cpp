#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string a;
    size_t pos = s.find_last_of(" ");
    a = s.substr(pos+1);
    s.erase(pos);
    
    for(int i = 0 ; i < s.size(); i++)
    {
        if(i == 0)
        {
            a.push_back((s[i]));
        }
        else if(s[i] == ' ' && s[i+1] != ' ')
        {
            a.push_back((s[i+1]));
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    
     cout << a << "@ptit.edu.vn";
    
    
}