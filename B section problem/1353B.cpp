#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int n , k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        sort(arr.begin(),arr.end());
        sort(arr1.begin(), arr1.end(), greater<int>());
        for(int i=0;i<k;i++){
            if(arr[i]<arr1[i]){
                swap(arr[i],arr1[i]);
            }
            else{
                break;
            }
        }
        int sum = 0;
        for(int x : arr){
            sum+=x;
        }
        cout<<sum<<endl;
    }
    
}