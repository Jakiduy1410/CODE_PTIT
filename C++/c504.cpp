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

void nhap(SinhVien &a) { 
    a.maSv = "B20DCCN001";
    //cin.ignore(); 
    getline(cin, a.hoTen);
    getline(cin, a.lop);
    getline(cin, a.ngaySinh);
    ChuanHoa(a.ngaySinh);
    cin >> a.GPA;
}

void in(SinhVien a) { 
    cout << a.maSv << " " << a.hoTen << " " << a.lop << " "
         << a.ngaySinh << " " << fixed << setprecision(2) << a.GPA << endl;
}

int main() {
    struct SinhVien a;
    nhap(a); 
    in(a);   
    return 0;
}