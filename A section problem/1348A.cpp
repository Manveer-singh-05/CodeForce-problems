#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a = (1 << n);  // 2^n
        int b = 0;

        // smallest (n/2 - 1) coins go to pile A
        for (int i = 1; i < n / 2; i++) {
            a += (1 << i);
        }

        // remaining coins go to pile B
        for (int i = n / 2; i < n; i++) {
            b += (1 << i);
        }

        cout << abs(a - b) << '\n';
    }

    return 0;
}