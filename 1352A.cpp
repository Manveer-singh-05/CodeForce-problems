#include <bits/stdc++.h>
using namespace std;
void solve(int k){
    int count = 0;
    vector<int> digits;
    while(k > 0){
        if(k % 10 != 0){
            digits.push_back((k % 10) * pow(10, count));
        }
        k /= 10;
        count++;
    }
    cout << digits.size() << "\n";
    for(int d : digits){
        cout << d << " ";
    }
    cout << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        solve(k);
    }
    return 0;
}