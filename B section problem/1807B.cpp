#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> even, odd;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }

        if (even.empty()) {
            cout << "NO\n";
            continue;
        }

        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end());

        int diff = 0;
        bool ok = true;

        for (int x : even) {
            diff += x;
            if (diff <= 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            for (int x : odd) {
                diff -= x;
                if (diff <= 0) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}