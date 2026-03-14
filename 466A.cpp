#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int option1 = n * a;
    int option2 = ((n + m - 1) / m) * b;
    int option3 = (n / m) * b + (n % m) * a;

    cout << min({option1, option2, option3});
}