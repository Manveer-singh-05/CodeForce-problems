#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evencount = 0;
    int oddcount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    for(int i=0;i<n;i++){
        if(evencount>oddcount){
            if(arr[i]%2!=0){
                cout<<i+1<<" ";
                break;
            }
        }
        else{
            if(arr[i]%2==0){
                cout<<i+1<<" ";
                break;
            }
        }
    }
}