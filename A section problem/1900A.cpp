
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                cnt++;
            }

            if (i + 2 < n &&
                s[i] == '.' &&
                s[i + 1] == '.' &&
                s[i + 2] == '.') {
                found = true;
            }
        }

        if (found) {
            cout << 2 << '\n';
        } else {
            cout << cnt << '\n';
        }
    }

    return 0;
}
