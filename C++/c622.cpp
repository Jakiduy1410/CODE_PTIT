#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
private:
    string maSV, ten, lop, email;

public:
    void nhap()
    {
        getline(cin, maSV);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
    }
    void in()
    {
        cout << maSV << " " << ten << " " << lop << " " << email << endl;
    }

    string getLop()
    {
        return lop;
    }
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> arrSV(n);
    for (int i = 0; i < n; i++)
    {
        arrSV[i].nhap();
    }
    int q;
    cin >> q;
    cin.ignore();

    vector<string> TenLop(q);
    for (int i = 0; i < q; i++)
    {
        getline(cin, TenLop[i]);
    }

    for (int i = 0; i < q; i++)
    {
        cout << "DANH SACH SINH VIEN LOP " << TenLop[i] << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            if (arrSV[j].getLop() == TenLop[i])
            {
                arrSV[j].in();
            }
        }
    }
    return 0;
}