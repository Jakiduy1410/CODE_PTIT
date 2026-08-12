#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

struct GiangVien {
    string ma, hoTen, boMon, vietTatBoMon, ten;

    void nhap(int stt) {
        getline(cin, hoTen);
        getline(cin, boMon);
        if (stt < 10)
        {
            ma = "GV0" + to_string(stt);
        }
        else ma = "GV" + to_string(stt);
        vietTatBoMon = vietTat(boMon);
        ten = layTen(hoTen);
    }

    static string vietTat(const string &s) {
        stringstream ss(s);
        string word, res;
        while (ss >> word) {
            res += toupper(word[0]);
        }
        return res;
    }

    static string layTen(const string &s) {
        stringstream ss(s);
        string word, last;
        while (ss >> word) last = word;
        return last;
    }

    void in() const {
        cout << ma << " " << hoTen << " " << vietTatBoMon << endl;
    }
};

bool cmp(const GiangVien &a, const GiangVien &b) {
    if (a.ten != b.ten) return a.ten < b.ten;
    return a.ma < b.ma;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<GiangVien> ds(n);
    for (int i = 0; i < n; ++i) {
        ds[i].nhap(i + 1);
    }
    sort(ds.begin(), ds.end(), cmp);
    for (const auto &gv : ds) {
        gv.in();
    }
    return 0;
}