#include <bits/stdc++.h>
using namespace std;

string ChuanHoa(string &s) {
    string word;
    stringstream ss(s);
    vector<string> name;
    while (ss >> word) {
        for(int i = 0; i < word.size(); i++) {
            word[i] = tolower(word[i]);
        }
        name.push_back(word);
    }
    s.clear();
    for(int i = 0; i < name.size(); i++) {
        if (i > 0) s += " ";
        s += name[i];
    }
    return s;
}

string Layten(string &s) {
    size_t pos = s.find_last_of(" ");
    string a = s.substr(pos+1);
    s.erase(pos);
    stringstream ss(s);
    string word;
    while (ss >> word) {
        a += word[0];
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    vector<string> s(t);
    map<string, int> emailCount;
    vector<string> emails;

    for (int i = 0; i < t; i++) {
        getline(cin, s[i]);
        s[i] = ChuanHoa(s[i]);
        string email = Layten(s[i]);
        
        
        if (emailCount.count(email)) {
            emailCount[email]++;
            emails.push_back(email + to_string(emailCount[email]));
        } else {
            emailCount[email] = 1;
            emails.push_back(email);
        }
    }

    
    for (const string &i : emails) {
        cout << i << "@ptit.edu.vn" << endl;
    }

    return 0;
}