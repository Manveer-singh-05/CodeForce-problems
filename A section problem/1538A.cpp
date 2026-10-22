
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int minPos = 0, maxPos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] < a[minPos])
                minPos = i;

            if (a[i] > a[maxPos])
                maxPos = i;
        }

        int ans = min({
            max(minPos, maxPos) + 1,
            n - min(minPos, maxPos),
            minPos + 1 + n - maxPos,
            maxPos + 1 + n - minPos
        });

        cout << ans << '\n';
    }

    return 0;
}
