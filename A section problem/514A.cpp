#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<int> v;

    while(n > 0) {
        int t = n % 10;

    
        if(n < 10 && t == 9) {
            v.push_back(9);
        }
        else {
            v.push_back(min(t, 9 - t));
        }

        n /= 10;
    }

    reverse(v.begin(), v.end());

    for(int x : v) {
        cout << x;
    }
}