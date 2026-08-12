#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n + 5];
    for (int i = 0; i < n; i++)
        cin >> A[i];

    sort(A, A + n);

    int newSize = unique(A, A + n) - A;

    for (int i = 0; i < newSize; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}