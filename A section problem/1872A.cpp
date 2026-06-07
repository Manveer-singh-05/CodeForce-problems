#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double a, b, c;
        cin >> a >> b >> c;

        double diff = abs(a - b);

        if (diff == 0) {
            cout << 0 << "\n";
        } else {
            double need = diff / 2.0;
            cout << (int)ceil(need / c) << "\n";
        }
    }

    return 0;
}