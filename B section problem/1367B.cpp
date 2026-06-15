#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int evenMismatch = 0;
        int oddMismatch = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (i % 2 == 0) {
                if (a[i] % 2 != 0)
                    evenMismatch++;
            } else {
                if (a[i] % 2 == 0)
                    oddMismatch++;
            }
        }

        if (evenMismatch != oddMismatch)
            cout << -1 << '\n';
        else
            cout << evenMismatch << '\n';
    }

    return 0;
}