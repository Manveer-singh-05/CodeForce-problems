#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        long long a[3] = {x, y, z};
        sort(a, a + 3);

        if (a[1] != a[2]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            cout << a[0] << " " << a[2] << " " << a[0] << "\n";
        }
    }

    return 0;
}