#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int Y, W;
    cin >> Y >> W;
 
    int mx = max(Y, W);
 
    int num = 7 - mx;   // favorable outcomes
    int den = 6;
 
    int g = __gcd(num, den);
 
    cout << num / g << "/" << den / g;
 
    return 0;
}