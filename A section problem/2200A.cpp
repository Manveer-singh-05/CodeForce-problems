#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    while (k--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        int winners = 0;

        if (mx > 0) {
            for (int x : a) {
                if (x == mx) {
                    winners++;
                }
            }
        }

        cout << winners << '\n';
    }

    return 0;
}