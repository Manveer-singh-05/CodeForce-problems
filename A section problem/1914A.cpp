#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'A']++;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            int required = i + 1;

            if (freq[i] >= required) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}