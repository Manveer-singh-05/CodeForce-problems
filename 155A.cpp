#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_val = arr[0];
    int max_val = arr[0];
    int count = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
            count++;
        }
        else if(arr[i] < min_val){
            min_val = arr[i];
            count++;
        }
    }

    cout << count << endl;
}