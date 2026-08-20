#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int cubes = 0;
    int level = 1;

    while (true) {
        int required = level * (level + 1) / 2;

        if (cubes + required > n)
            break;

        cubes += required;
        height++;
        level++;
    }

    cout << height << endl;

    return 0;
}