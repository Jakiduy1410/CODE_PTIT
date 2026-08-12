#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string msv, ten, lop, ngaySinh;
    float gpa;

public:
    SinhVien()
    {
        msv = ten = lop = ngaySinh = "";
        gpa = 0;
    }

    static string SinhMaSV(int stt)
    {
        string res = "B20DCCN";
        if (stt < 10)
            res += "00";
        else if (stt < 100)
            res += "0";
        res += to_string(stt);
        return res;
    }
    static void ChuanHoa_NgaySinh(string &s)
    {
        if (s[1] == '/')
            s.insert(0, "0");
        if (s[4] == '/')
            s.insert(3, "0");
    }

    friend istream &operator>>(istream &is, SinhVien &a)
    {
        is.ignore();
        static int stt = 1;
        a.msv = SinhMaSV(stt++);
        getline(is, a.ten);
        is >> a.lop >> a.ngaySinh >> a.gpa;
        ChuanHoa_NgaySinh(a.ngaySinh);
        return is;
    }
    friend ostream &operator<<(ostream &os, const SinhVien &a)
    {
        os << a.msv << " " << a.ten << " " << a.lop << " " << a.ngaySinh << " "
           << fixed << setprecision(2) << a.gpa << endl;
        return os;
    }
};

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}