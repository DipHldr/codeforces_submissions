#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin>>n;
 
    vector<ll>a(n);
    for(int _=0;_<2;_++)
        for(int i=0;i<n;i++)cin>>a[i];
 
 
    vector<ll>ans(1+*max_element(a.begin(),a.end()),1);
 
    for(int i=1;i<(int)ans.size();i++){
        ans[i]=(2LL*ans[i-1])%MOD;
    }
 
    for(auto it:a){
        cout<<ans[it]<<endl;
    }
    
}