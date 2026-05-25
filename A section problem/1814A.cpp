#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        // If n is even, we can always make it using 2-value coins
        if (n % 2 == 0) {
            cout << "YES\n";
        }
        else {
            // If n is odd, we need at least one odd-valued k coin
            if (k % 2 == 1 && n >= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}