#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        vector<int> ans(m);

        for (int i = 0; i < m; i++) {
            cin >> ans[i];
        }

        // If all elements are equal, impossible
        if (ans[0] == ans[m - 1]) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        
        cout << ans[m - 1] << " ";

       
        for (int i = 0; i < m - 1; i++) {
            cout << ans[i] << " ";
        }

       
        cout << endl;
    }

    return 0;
}