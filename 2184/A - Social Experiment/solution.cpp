#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        if(n==2||n==3){
            cout<<n<<"
";
            continue;
        }
    
        if(n%2==0){
            cout<<0<<"
";
        }else{
            cout<<1<<"
";
        }
    }
 
    return 0;
}