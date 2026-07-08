#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = stoi(s);

        if (n % 7 == 0) {
            cout << n << "\n";
            continue;
        }

        bool found = false;

        for (int i = 0; i < s.size() && !found; i++) {
            char original = s[i];

            for (char c = '0'; c <= '9'; c++) {

                if (c == original)
                    continue;

                if (i == 0 && c == '0')
                    continue;

                s[i] = c;

                if (stoi(s) % 7 == 0) {
                    cout << s << "\n";
                    found = true;
                    break;
                }
            }

            s[i] = original;
        }
    }

    return 0;
}