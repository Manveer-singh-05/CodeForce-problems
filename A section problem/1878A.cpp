#include <bits/stdc++.h>
using namespace std;
int  main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int l;
        cin>>l;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool found = false;
        for(int i=0;i<n;i++){
            if(arr[i]==l){
                found = true;
                break;
            }
        }
        if(found){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}