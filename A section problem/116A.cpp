#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int rem = 0, maxi = 0;

    while(n--){
        int a, b;
        cin >> a >> b;

        rem = rem - a + b;
        maxi = max(maxi, rem);
    }

    cout << maxi;
}