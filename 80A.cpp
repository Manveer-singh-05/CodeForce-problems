#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43 , 47};
    bool found= false;

    for(int i = 0; i < 15; i++){
        if(arr[i]==n && arr[i+1] ==m){
            found = true;
        }
    }
    if(!found){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}