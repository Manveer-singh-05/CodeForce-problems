#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    while(m--){
            int n;
            cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>t;
        int left = 0;
        int right  = n-1;
        while(left<=right){

            t.push_back(arr[left]);
            if(left<right){

                t.push_back(arr[right]);
                right--;

            }
            left++;
        }
        for(int x: t){
            cout<<x<<" ";
        }
    }
}