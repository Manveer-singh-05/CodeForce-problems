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
        string target = "Timur";
    sort(target.begin(), target.end());
        if (n != 5) {
            cout << "NO" << endl;
        }
        else {
            sort(s.begin(), s.end());

            if (s == target) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
}