#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    getline(cin,a);
    getline(cin,b);

    size_t pos;
    while ((pos = a.find(b)) != string::npos) {
        a.erase(pos, b.size()); 
    }

    cout << a << endl;
    return 0;
}