#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
    string maSv;
    string hoTen;
    string lop;
    string ngaySinh;
    float GPA;
};

void ChuanHoa(string &ns) {
    if (ns.length() >= 6) {
        if (ns[1] == '/') ns.insert(0, "0");
        if (ns[4] == '/') ns.insert(3, "0");
    }
}

void nhap(SinhVien ds[], int n) { 
    for (int i = 0; i < n; i++) {
        if (i < 9) {
            ds[i].maSv = "B20DCCN00" + to_string(i + 1);
        } else {
            ds[i].maSv = "B20DCCN0" + to_string(i + 1);
        }
        cin.ignore();
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        ChuanHoa(ds[i].ngaySinh);
        cin >> ds[i].GPA;
    }
}

void in(SinhVien ds[], int n) { 
    for (int i = 0; i < n; i++) {
        cout << ds[i].maSv << " " << ds[i].hoTen << " " << ds[i].lop << " "
             << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].GPA << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}