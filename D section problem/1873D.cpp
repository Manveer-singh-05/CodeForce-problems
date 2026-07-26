#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == 'W') {
                i++;
                continue;
            }

            // Leftmost uncovered black cell
            ans++;

            int start = min(i, n - k);
            int end = start + k - 1;

            // Skip all black cells covered by this operation
            i++;
            while (i <= end && i < n)
                i++;

            while (i < n && s[i] == 'W')
                i++;
        }

        cout << ans << "\n";
    }

    return 0;
}