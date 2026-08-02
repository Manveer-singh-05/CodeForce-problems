#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int fav = a[f - 1];

        int greater = 0, equal = 0;

        for (int x : a) {
            if (x > fav)
                greater++;
            else if (x == fav)
                equal++;
        }

        if (greater >= k)
            cout << "NO\n";
        else if (greater + equal <= k)
            cout << "YES\n";
        else
            cout << "MAYBE\n";
    }

    return 0;
}