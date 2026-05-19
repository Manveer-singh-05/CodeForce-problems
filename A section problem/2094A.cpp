#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();   

    while (n--) {
        string b;
        getline(cin, b);

        string ans = "";

        if (!b.empty())
            ans += b[0];

        int k = 1;

        while (k < b.size()) {
            if (b[k] == ' ' && k + 1 < b.size()) {
                ans += b[k + 1];
            }
            k++;
        }

        cout << ans << endl;
    }
}