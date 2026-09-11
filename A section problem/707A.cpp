#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char ch;
    bool colored = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ch;

            if (ch == 'C' || ch == 'M' || ch == 'Y') {
                colored = true;
            }
        }
    }

    if (colored)
        cout << "#Color";
    else
        cout << "#Black&White";

    return 0;
}