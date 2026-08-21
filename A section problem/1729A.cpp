#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long time1 = abs(a - 1);
        long long time2 = abs(b - c) + abs(c - 1);

        if (time1 < time2)
            cout << 1 << '\n';
        else if (time2 < time1)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }

    return 0;
}