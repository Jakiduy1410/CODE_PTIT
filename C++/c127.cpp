#include <iostream>

using namespace std;

const int MAXN = 1000000;
int p[MAXN + 1];

void seive()
{
    for (int i = 0; i <= MAXN; i++)
    {
        p[i] = 1; // Giả sử tất cả đều là số nguyên tố
    }
    p[0] = p[1] = 0; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i <= MAXN; i++)
    {
        if (p[i]) // Nếu i là số nguyên tố
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                p[j] = 0; // Đánh dấu bội số của i là không phải số nguyên tố
            }
        }
    }
}

void Check(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (p[i]) // Nếu i là số nguyên tố
        {
            int res = n - i;
            if (res > 1 && p[res]) // Kiểm tra res cũng là số nguyên tố
            {
                cout << i << " " << res << endl;
                return;
            }
        }
    }
    cout << "-1\n"; // Nếu không tìm được cặp số, in ra -1
}

int main()
{
    int t, a;
    seive(); // Tiền xử lý sàng nguyên tố
    cin >> t;
    while (t--)
    {
        cin >> a;
        Check(a);
    }
}
