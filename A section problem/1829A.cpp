#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int count =0;
    while(m--){
        string ans;
        cin>>ans;
        if(ans[0]!='c'){
            count++;
        }
        if(ans[1]!='o'){
            count++;
        }
         if(ans[2]!='d'){
            count++;
        }
         if(ans[3]!='e'){
            count++;
        }
         if(ans[4]!='f'){
            count++;
        }
         if(ans[5]!='o'){
            count++;
        }
         if(ans[6]!='r'){
            count++;
        }
         if(ans[7]!='c'){
            count++;
        }
         if(ans[8]!='e'){
            count++;
        }
         if(ans[9]!='s'){
            count++;
        }
        
        cout<<count<<endl;
        count = 0;
        
    }
}