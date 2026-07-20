#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a, b, c;

        // First letter
        for (a = 1; a <= 26; a++) {
            int rem = n - a;
            if (rem >= 2 && rem <= 52)
                break;
        }

        int rem = n - a;

        // Second letter
        for (b = 1; b <= 26; b++) {
            int rem2 = rem - b;
            if (rem2 >= 1 && rem2 <= 26)
                break;
        }

        c = rem - b;

        cout << char('a' + a - 1)
             << char('a' + b - 1)
             << char('a' + c - 1) << '\n';
    }

    return 0;
}