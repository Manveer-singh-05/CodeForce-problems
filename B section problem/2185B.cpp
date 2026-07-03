#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll value(vector<int> &a) {
    ll sum = 0;
    int mx = 0;
    for (int x : a) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = value(a);

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(a[i], a[j]);
                ans = max(ans, value(a));
                swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}