#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
void solve(){
 ll maxi=0;
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    for(int a=1;a<=x;a++){
        for(int b=1;b<=y;b++){
            if(k%(a*b))continue;
            ll c=k/(a*b);
            if(c>z)continue;
 
            ll ways=(ll)(x-a+1)*(y-b+1)*(z-c+1);
            maxi=max(maxi,ways);            
        }
    }
    cout<<maxi<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin>>n;
    while(n--){
        solve();
    }
 
 
    
    
    
}