#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int h, m;
        cin >> h >> m;
 
        int totalMinutes = h * 60 + m;
        int remaining = 1440 - totalMinutes;
 
        cout << remaining << endl;
    }
 
    return 0;
}