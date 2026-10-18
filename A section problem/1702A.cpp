
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string m;
        cin >> m;

        int n = stoi(m);
        int round = 1;

        while (n / round >= 10) {
            round *= 10;
        }

        cout << n - (n / round) * round << '\n';
    }

    return 0;
}
