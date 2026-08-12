#include<bits/stdc++.h>
using namespace std;

string Dich(string s) {
    string sum;
    for(char c : s) {
        c = toupper(c);
        
        if (c == 'A' || c == 'B' || c == 'C') {
            sum += '2';
        }
        else if (c == 'D' || c == 'E' || c == 'F') {
            sum += '3';
        }
        else if (c == 'G' || c == 'H' || c == 'I') {
            sum += '4';
        }
        else if (c == 'J' || c == 'K' || c == 'L') {
            sum += '5';
        }
        else if (c == 'M' || c == 'N' || c == 'O') {
            sum += '6';
        }
        else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') {
            sum += '7';
        }
        else if (c == 'T' || c == 'U' || c == 'V') {
            sum += '8';
        }
        else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z') {
            sum += '9';
        }
        
    }
    
    if (sum.empty()) {
        return 0;
    }
    return sum; 
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s,a;
        cin >> s;
        for(char &c : s) c = toupper(c);
        string sum = Dich(s);
        reverse(sum.begin(), sum.end());
        if (Dich(s) == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
        
    }
    
}