#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        int arr[4] = {s1, s2, s3, s4};
        sort(arr, arr + 4);

        if ((w1 == arr[2] && w2 == arr[3]) ||
            (w1 == arr[3] && w2 == arr[2]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}