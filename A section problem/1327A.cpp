#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long m, k;
        cin >> m >> k;

        if (m >= k * k && (m % 2 == k % 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}