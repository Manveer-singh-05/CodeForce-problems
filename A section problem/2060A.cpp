#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        map<int, int> cnt;
        cnt[a1 + a2]++;
        cnt[a4 - a2]++;
        cnt[a5 - a4]++;

        int ans = 0;
        for (auto &p : cnt)
            ans = max(ans, p.second);

        cout << ans << "\n";
    }

    return 0;
}