#include<bits/stdc++.h>
using namespace std;

string ChuanHoa(string &s)
{
    string word;
    stringstream ss(s);
    vector<string> name;
    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        for(int i = 1 ; i < word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }
        name.push_back(word);
    }
    s.clear();

    for(int i = 0 ; i < name.size(); i++)
    {
        if (i > 0)
        {
            s += " ";
        }
        s += name[i];
        
    }
    return s;
}

void Cach1(string &s)
{
    size_t pos = s.find_last_of(" ");
    string a;
    a = s.substr(pos+1);
    s.erase(pos);
    cout << a << " " << s;

}

void Cach2(string &s)
{
    size_t pos = s.find(" ");
    string a;
    a = s.substr(pos+1);
    s.erase(pos);
    cout << a << " " << s;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        s = ChuanHoa(s);
        if (n == 1)
        {
            Cach1(s);
        }
        else if (n== 2)
        {
            Cach2(s);
        }
        cout << endl;
        
        
    }
    
}