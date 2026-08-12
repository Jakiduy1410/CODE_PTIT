#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
      stack<char> st;
        string s;
        cin >> s;

        // Ý tưởng / lời giải (stack method):
        // - Bài toán: cho một xâu gồm các ký tự 'I' (increase) và 'D' (decrease).
        //   Ta cần sinh một hoán vị gồm các số 1..(n+1) sao cho giữa vị trí i và i+1
        //   có mối quan hệ tăng (I) hoặc giảm (D) tương ứng.
        // - Thuật toán dùng stack:
        //   Duyệt i từ 0 đến n (n = s.size()). Tại mỗi bước đẩy số (i+1) vào stack.
        //   Khi gặp ký tự 'I' hoặc đã đến cuối xâu (i == n), ta pop toàn bộ stack và in
        //   ra theo thứ tự pop (điều này tạo ra dãy giảm tương ứng với các 'D' trước đó).
        // - Kết quả là hoán vị nhỏ nhất (lexicographically smallest) thỏa mãn chuỗi I/D.
       
        for(int i = 0 ; i <= (int)s.size() ; i++)
        {
            // đẩy số (i+1) vào stack
            char num = (i + '0') + 1; // hiện tại dùng char cho số 1..9
            st.push(num);

            // nếu gặp 'I' tại vị trí i hoặc đã đến cuối chuỗi, pop toàn bộ stack
            // và in ra (tạo dãy giảm tương ứng với những 'D' trước đó)
            if (i == (int)s.size() || s[i] == 'I')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
            }
            
        }
        cout << endl;
    }
       
    return 0;
}