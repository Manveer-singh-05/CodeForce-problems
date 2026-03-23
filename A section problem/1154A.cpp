#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int larg = arr[3];
    int a = larg-arr[0];
    int b = larg-arr[1];
    int c = larg-arr[2];
    cout<<a<<" "<<b<<" "<<c<<endl;
}