#include <bits/stdc++.h>
using namespace std;

bool Check(string s){
    if (s == "push" || s == "show" || s == "pop")
    {
        return true;
    }
    return false;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> s;
    string temp;
    while (cin >> temp)
    {
        s.push_back(temp);
    }
    vector<string> st;  
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(Check(s[i])){
            if (s[i] == "push")
            {
                st.push_back(s[i+1]);
            }
            if (s[i] == "show")
            {
                if (!st.empty())
                {
                   for(auto i : st) cout << i << " ";
                    cout << endl;
                } 
                else cout << "empty" << endl;
            }
            if (s[i] == "pop")
            {
                st.erase(st.end());
            }
            
        }
        else{
            continue;
        }
    }
    return 0;
}