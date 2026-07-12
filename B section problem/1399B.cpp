#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        long long minCandy = LLONG_MAX;
        long long minOrange = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            minCandy = min(minCandy, a[i]);
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            minOrange = min(minOrange, b[i]);
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans += max(a[i] - minCandy, b[i] - minOrange);
        }

        cout << ans << endl;
    }

    return 0;
}