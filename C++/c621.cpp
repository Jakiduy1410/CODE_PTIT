/******************************************************************************

SẮP XẾP THEO MÃ SINH VIÊN

CPP0621

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
      string maSV, ten, lop, email;
    public:
      void Input()
      {
          getline(cin,maSV);
          getline(cin,ten);
          getline(cin,lop);
          getline(cin,email);
      }
      
      void Output()
      {
          cout << maSV << " " << ten << " " << lop << " " << email;
      }
      
      string getmaSV()
      {
          return maSV;
      }
};

bool Cmp_maSV(SinhVien a, SinhVien b)
{
    return a.getmaSV() < b.getmaSV();
}

int main()
{
    vector<SinhVien> arrSV;
    while(!cin.eof())
    {
        SinhVien s;
        s.Input();
        arrSV.push_back(s);
    }
    sort(arrSV.begin(), arrSV.end(), Cmp_maSV);
    
    for(auto i : arrSV)
    {
      i.Output();
      cout << endl;
    }
    return 0;
}