#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;

string ChuanHoa(string &s)
{
    for (int i = 1; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
    stringstream ss(s);
    string word;
    vector<string> cau;
    while (ss >> word)
    {
        cau.push_back(word);
    }
    s.erase();
    
    for (int i = 0; i < cau.size(); i++)
    {
        if (i>0)
        {
            s+=" ";
        }
        s+= cau[i];
        
    }
    s.erase(s.size() - 1);
    s[0] = toupper(s[0]);
    return s;
    
    
    
}

int main()
{
    string line;
    vector<string> text;
    while (getline(cin, line))
    {
        text.push_back(line);
    }

    vector<string> cau;
    string tu;
    for(const string& s : text)
    {
        for(char c : s)
        {
            tu += c;
            if (c == '.' || c == '?' || c == '!')
            {
                cau.push_back(tu);
                tu.clear();
            }
            
        }
    }
    for (string i : cau)
    {
        cout << ChuanHoa(i) << endl;
    }
}