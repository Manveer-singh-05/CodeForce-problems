#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        set<int> occupied;

        bool ok = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (i == 0) {
                occupied.insert(a[i]);
            } else {
                if (occupied.count(a[i] - 1) || occupied.count(a[i] + 1)) {
                    occupied.insert(a[i]);
                } else {
                    ok = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}