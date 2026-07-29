#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {

        int m;
        cin >> m;

        string s;
        cin >> s;

        if (m < 4) {
            cout << "No" << endl;
            continue;
        }

        string temp = "";

        for (int i = 0; i < m; i++) {
            char c = tolower(s[i]);

            if (temp.empty())
                temp += c;
            else if (temp.back() == c)
                continue;
            else
                temp += c;
        }

        if (temp == "meow")
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}