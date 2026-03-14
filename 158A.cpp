#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int threshold = arr[n-1];
    int count =0;
    for(int i=0;i<m;i++){
        if(arr[i]>=threshold && arr[i]>0){
            count++;
            }
    }
    cout<<count<<endl;

}