#include <iostream>
using namespace std;

int main() {
    string table, card;
    cin >> table;

    for (int i = 0; i < 5; i++) {
        cin >> card;
        if (card[0] == table[0] || card[1] == table[1]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}