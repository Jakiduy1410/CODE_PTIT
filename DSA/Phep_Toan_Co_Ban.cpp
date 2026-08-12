#include <bits/stdc++.h>
using namespace std;
vector<string> op1,math,op2,check;

vector<string> Check(string x)
{
    vector<string> s;
    if (x.size() == 2)
    {
        if (x[0] == '?' && x[1] == '?')
        {
            for(int i = 10 ;  i <= 99 ; i++) 
            {
                s.push_back(to_string(i));
            }
        }
        else if (x[0] == '?' && x[1] != '?')
        {
            string tmp; 
            for(int i = 1 ; i <= 9 ; i++)
            {
                tmp = to_string(i) + x[1];
                s.push_back(tmp);
                tmp.clear();
            }
        } 
        else if (x[0] != '?' && x[1] == '?')
        {
            string tmp; 
            for(int i = 0 ; i <= 9 ; i++)
            {
                tmp = x[0] + to_string(i);
                s.push_back(tmp);
                tmp.clear();
            }
        } 
        else
        {
            s.push_back(x);
        }
        
    }
    else if(x.size() == 1)
    {
        if(x[0] == '?')
        {
            s.push_back("+");
            s.push_back("-");
            s.push_back("*");
            s.push_back("/");
        }
        else s.push_back(x);
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        vector<string> a;
        string word;
        stringstream ss(s);
        while (ss >> word)
        {
            a.push_back(word);
        }
        op1 = Check(a[0]);
        math = Check(a[1]);
        op2 = Check(a[2]);
        check = Check(a[4]);
        bool found = false; 
        for(auto s1 : op1)
        {
            for(auto m : math)
            {
                for(auto s2 : op2)
                {
                    for(auto s3 : check)
                    {
                        int n1 = stoi(s1);
                        int n2 = stoi(s2);
                        int n3 = stoi(s3);
                        bool ok = false;
                        if (m == "+")
                           if (n1 + n2 == n3) ok = true;
                        if (m == "-")
                           if (n1 - n2 == n3) ok = true;
                        if (m == "*")
                           if (n1 * n2 == n3) ok = true;
                        if (m == "/")
                           if (n2 != 0 && n1 % n2 == 0 && n1 / n2 == n3) ok = true;
                          
                        if (ok)
                        {
                            cout << n1 << " " << m << " " << n2 << " = " << n3;
                            found = true;
                            break;
                        }
                    }
                    if(found) break;
                }
                if(found) break;
            }
            if(found) break;
        }
        if (!found)
        {
            cout << "WRONG PROBLEM!";
        }
        cout << endl;
    }

    return 0;
}