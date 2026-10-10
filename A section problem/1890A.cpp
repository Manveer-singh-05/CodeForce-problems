
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int distinct = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                distinct++;
            }
        }

        if (distinct == 1) {
            cout << "Yes\n";
        } else if (distinct == 2) {
            int c1 = 0, c2 = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] == a[0]) c1++;
                else c2++;
            }

            cout << (abs(c1 - c2) <= 1 ? "Yes\n" : "No\n");
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
