#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string ss;
    cin>>ss;
    int n=ss.length();
    int idx=-1;
    for(int i=0;i<n;i++){
        if(ss[i]=='0'){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        ss.pop_back();
        cout<<ss<<"
";
        return 0;
    }
    for(int i=idx;i<n-1;i++){
        ss[i]=ss[i+1];
    }
    ss.pop_back();
    cout<<ss<<"
";
 
    return 0;
 
}