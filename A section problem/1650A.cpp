
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        char c;

        cin >> s >> c;

        bool found = false;

        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == c) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
