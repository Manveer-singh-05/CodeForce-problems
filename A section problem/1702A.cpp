
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int round = 1;

        while (n / round >= 10) {
            round *= 10;
        }

        int ans = n - round * (n / round);
        cout << ans + (n / round - 1) * round << '\n';
    }

    return 0;
}
