#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);

        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            mx = max(mx, a[i]);

            if (a[i] < mn1) {
                mn2 = mn1;
                mn1 = a[i];
            }
            else if (a[i] < mn2) {
                mn2 = a[i];
            }
        }

        if (mx <= d || mn1 + mn2 <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}