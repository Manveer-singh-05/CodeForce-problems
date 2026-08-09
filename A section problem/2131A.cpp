#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[10], b[10];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = 1;   // final iteration

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i])
                ans += a[i] - b[i];
        }

        cout << ans << '\n';
    }

    return 0;
}