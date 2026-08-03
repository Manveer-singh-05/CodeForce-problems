#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int k;
        cin >> k;

        string t;
        cin >> t;

        string ans = "";
        string temp = "";

        for (int i = 0; i < k; i++) {
            if (temp.empty()) {
                temp += t[i];
                continue;
            }

            if (temp[0] == t[i]) {
                ans += temp[0];
                temp = "";
            } else {
                temp += t[i];
            }
        }

        cout << ans << '\n';
    }
}