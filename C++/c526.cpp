#include <bits/stdc++.h>

using namespace std;

struct Tuoi
{
    string ten, date;
    int ngay, thang, nam;
};

void nhap(Tuoi &a)
{
    cin >> a.ten >> a.date;
    a.ngay = (a.date[0] - '0') * 10 + a.date[1] - '0';
    a.thang = (a.date[3] - '0') * 10 + a.date[4] - '0';
    a.nam = (a.date[6] - '0') * 1000 + (a.date[7] - '0') * 100 + (a.date[8] - '0') * 10 + (a.date[9] - '0');
}
bool CmpTuoi(const Tuoi &a, const Tuoi &b)
{
    if (a.nam != b.nam)
        return a.nam < b.nam;
    if (a.thang != b.thang)
        return a.thang < b.thang;
    return a.ngay < b.ngay;
}

int main()
{
    Tuoi ds[50];
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sort(ds, ds + n, CmpTuoi);

    cout << ds[n - 1].ten << endl;
    cout << ds[0].ten << endl;
}