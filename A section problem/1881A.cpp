#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int ans = 0;
        bool found = false;
 
        // Maximum 6-7 doublings are enough since n*m <= 25
        for (int i = 0; i <= 6; i++) {
            if (x.find(s) != string::npos) {
                cout << ans << "\n";
                found = true;
                break;
            }
            x += x;
            ans++;
        }
 
        if (!found)
            cout << -1 << "\n";
    }
 
    return 0;
}