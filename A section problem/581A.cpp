#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int different_days = min(a, b);
    int same_days = (max(a, b) - min(a, b)) / 2;

    cout << different_days << " " << same_days;

    return 0;
}
