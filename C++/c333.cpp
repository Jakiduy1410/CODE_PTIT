#include<iostream>
#include<string>
#include<sstream>
using namespace std;
// TEst thu sstream
int main()
{
    string s,last,a;
    getline(cin , s);
    size_t pos = s.find_last_of(" ");
    last = s.substr(pos+1);
    for(int i = 0 ; i < last.size() ; i++)
    {
        last[i] == toupper(last[i]);
    }
    s.erase(pos);
    for(int i = 0 ; i < s.size(); i++)
    {
        if(i == 0) s[i] = toupper(s[i]);
        else if(s[i-1] == ' ') s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]); 
       
    }
    cout << s <<", " << last;

}
