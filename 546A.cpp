#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    long long cal = 0;

    for(int i = 1; i <= c; i++) {
        cal += a * i;
    }

    long long remaining = cal - b;

    if(remaining < 0)
        cout << 0 << endl;
    else
        cout << remaining << endl;

    return 0;
}
