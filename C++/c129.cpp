#include <iostream>
using namespace std;

int findMaxPower(int N, int p) {
    int x = 0;
    while (N >= p) {
        x += N / p;
        N /= p;
    }
    return x;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, p;
        cin >> N >> p;
        cout << findMaxPower(N, p) << endl;
    }
    return 0;
}