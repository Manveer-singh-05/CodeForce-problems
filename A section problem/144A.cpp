#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maxi_posi = 0;
    int min_posi = 0;

    // find first max
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[maxi_posi]){
            maxi_posi = i;
        }
    }

    // find last min
    for(int i = 0; i < n; i++){
        if(arr[i] <= arr[min_posi]){
            min_posi = i;
        }
    }

    int steps = maxi_posi + (n - 1 - min_posi);

    if(maxi_posi > min_posi){
        steps--;
    }

    cout << steps << endl;
}