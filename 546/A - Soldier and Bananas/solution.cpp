#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll k,n,w;
    cin>>k>>n>>w;
 
    ll tot=(w*(w+1))/2;
    ll fin=tot*k;
 
    ll borrow=fin-n;
    if(borrow>0){
        cout<<borrow<<endl;
    }else{
        cout<<0<<endl;
    }
    
    
 
}