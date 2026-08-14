#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k);

        int mx = 0;

        for (int i = 0; i < k; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        long long ans = 0;

        bool usedMax = false;

        for (int i = 0; i < k; i++) {

            // Keep one largest piece as the final piece
            if (a[i] == mx && !usedMax) {
                usedMax = true;
                continue;
            }

            if (a[i] == 1) {
                ans += 1;
            }
            else {
                ans += 2LL * a[i] - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}