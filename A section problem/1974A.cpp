#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int screens = (y + 1) / 2;

        if (y % 2 == 0)
            x -= screens * 7;
        else
            x -= screens * 7 + 4;

        if (x > 0)
            screens += (x + 14) / 15;

        cout << screens << "\n";
    }

    return 0;
}