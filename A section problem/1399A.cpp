#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        sort(arr,arr+a);
        bool check  = false;
        for(int i=0;i<a-1;i++){
            if(arr[i+1] - arr[i] > 1){
                check = true;
                break;
            }
        }
        if(check){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}