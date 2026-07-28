#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[105];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int runs = 1;

        for (int i = 1; i < n; i++) {
            if ((a[i] % 2) != (a[i - 1] % 2))
                runs++;
        }

        cout << n - runs << "\n";
    }

    return 0;
}