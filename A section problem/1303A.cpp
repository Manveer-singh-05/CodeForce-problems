#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    while(m--) {
        string n;
        cin >> n;

        int left = 0;
        int right = n.size() - 1;

        while(left < n.size() && n[left] != '1')
            left++;

        while(right >= 0 && n[right] != '1')
            right--;

        int count = 0;

        for(int i = left; i <= right; i++) {
            if(n[i] == '0')
                count++;
        }

        cout << count << endl;
    }
}