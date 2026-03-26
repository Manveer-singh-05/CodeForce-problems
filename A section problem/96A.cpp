#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    
    if(s.size() < 7){
        cout << "NO";
        return 0;
    }
    for(int i=0;i<s.size();i++){
       string  temp = s.substr(i,7);
        if(temp == "1111111" || temp == "0000000"){
            cout << "YES";
            return 0;
        }

    }
    cout << "NO";

}