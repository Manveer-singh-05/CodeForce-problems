#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[0]; // distance from 0 to first station

        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }

        // last stretch needs double fuel
        ans = max(ans, 2 * (x - a[n - 1]));

        cout << ans << endl;
    }

    return 0;
}