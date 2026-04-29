#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int min = INT_MAX;
        while(k>0){
            int e = k%10;
            if(e<min){
                min = e;
            }
             k/=10;
        }
        cout<<min<<endl;
        min  = INT_MAX;

    }

}