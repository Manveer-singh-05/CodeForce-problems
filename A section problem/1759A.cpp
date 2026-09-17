#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string p;

        while (p.size() < s.size() + 3) {
            p += "Yes";
        }

        if (p.find(s) != string::npos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}