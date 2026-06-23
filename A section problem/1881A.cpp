#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = 0;

        while (true) {
            if (x.find(s) != string::npos) {
                cout << ans << "\n";
                break;
            }

            if (x.size() > 2 * m) {
                cout << -1 << "\n";
                break;
            }

            x += x;
            ans++;
        }
    }

    return 0;
}