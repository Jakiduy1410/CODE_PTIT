#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct SinhVien {
    int stt;
    string HoTen, maSv, lop, email, dn;
};

bool compareByName(const SinhVien &a, const SinhVien &b) {
    return a.HoTen < b.HoTen; 
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    vector<SinhVien> sv(n);

    for (int i = 0; i < n; i++) {
        sv[i].stt = i + 1;
        cin >> sv[i].maSv;
        cin.ignore();
        getline(cin, sv[i].HoTen);
        cin >> sv[i].lop >> sv[i].email >> sv[i].dn;
    }

    int q;
    cin >> q;
    cin.ignore(); 

    while (q--) {
        string x;
        getline(cin, x); 
        vector<SinhVien> result;

      
        for (int i = 0; i < n; i++) {
            if (sv[i].dn == x) {
                result.push_back(sv[i]);
            }
        }

        
        sort(result.begin(), result.end(), compareByName);

        
        
        for (const auto &s : result) {
            cout << s.stt << " " << s.maSv << " " << s.HoTen << " " << s.lop << " " << s.email << " " << s.dn << endl;
        }
    }

    return 0;
}