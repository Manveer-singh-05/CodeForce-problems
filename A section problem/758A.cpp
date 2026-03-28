#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int mx = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
        sum += a[i];
    }

    int S = n * mx - sum;
    cout << S << endl;

    return 0;
}