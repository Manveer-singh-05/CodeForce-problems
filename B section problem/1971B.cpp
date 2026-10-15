#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool same = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                same = false;
                break;
            }
        }

        if (same) {
            cout << "NO\n";
            continue;
        }

        string r = s;
        sort(r.begin(), r.end());

        if (r != s) {
            cout << "YES\n";
            cout << r << "\n";
        } else {
            reverse(r.begin(), r.end());
            cout << "YES\n";
            cout << r << "\n";
        }
    }

    return 0;
}