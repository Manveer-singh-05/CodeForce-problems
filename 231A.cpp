#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mat[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    int finalCount=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(count>=2){
            finalCount++;
            
        }
    }
    cout<<finalCount;
    return 0;
}