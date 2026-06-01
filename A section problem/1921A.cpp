#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        int minX = 1001, maxX = -1001;

        for (int i = 0; i < 4; i++) {
            cin >> x >> y;
            minX = min(minX, x);
            maxX = max(maxX, x);
        }

        int side = maxX - minX;
        cout << side * side << '\n';
    }

    return 0;
}