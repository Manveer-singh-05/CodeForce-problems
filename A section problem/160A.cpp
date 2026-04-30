#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int total = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    
    // Step 1: sort descending
    sort(a.rbegin(), a.rend());
    
    int mySum = 0, count = 0;
    
    // Step 2: pick largest coins
    for(int i = 0; i < n; i++) {
        mySum += a[i];
        count++;
        
        if(mySum > total - mySum)
            break;
    }
    
    cout << count;
    
    return 0;
}