#include<bits/stdc++.h>
using namespace std;
int i,j,k;
int main(){
    string s;
    cin>>s;
 
    for(i=0;i<(int)s.size()-3;i++){
        if(s.substr(i,4)=="bear"){
            k=i+1;
        }
        j+=k;
    }
 
    cout<<j;
    return 0;
}