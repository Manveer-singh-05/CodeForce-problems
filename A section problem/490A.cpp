#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p, m, s;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == 1)
            p.push_back(i);
        else if (x == 2)
            m.push_back(i);
        else
            s.push_back(i);
    }

    int teams = min({(int)p.size(), (int)m.size(), (int)s.size()});

    cout << teams << "\n";

    for (int i = 0; i < teams; i++) {
        cout << p[i] << " " << m[i] << " " << s[i] << "\n";
    }

    return 0;
}