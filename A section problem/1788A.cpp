#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int totalTwo = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2)
                totalTwo++;
        }

        // Total number of 2s must be even
        if (totalTwo % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int target = totalTwo / 2;
        int countTwo = 0;
        int ans = -1;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2)
                countTwo++;

            if (countTwo == target) {
                ans = i + 1;   // k is 1-indexed
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}