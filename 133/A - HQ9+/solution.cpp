#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string ss;
    cin>>ss;
 
    // int tt=0;
    for(int i=0;i<ss.length();i++){
        if(ss[i]=='H'||ss[i]=='9'||ss[i]=='Q'){
            cout<<"YES
";
            return 0;
        }
    }
 
    cout<<"NO
";
 
    return 0;
}