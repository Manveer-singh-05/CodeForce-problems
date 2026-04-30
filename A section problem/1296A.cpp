
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> arr(n);
        int sum = 0;
        bool hasOdd = false, hasEven = false;
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
 
            if (arr[i] % 2 == 0) hasEven = true;
            else hasOdd = true;
        }
 
        if (sum % 2 != 0) {
            cout << "YES\n";
        }
        else {
            if (hasOdd && hasEven) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}