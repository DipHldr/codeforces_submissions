#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
 
    vector<ll>x(n),h(n);
 
    for(int i=0;i<n;i++){
        cin>>x[i]>>h[i];
    }
 
    if(n<=2){
        cout<<n<<"
";
        return 0;
    }
 
    ll ans=2;
    ll last_position=x[0];
 
    for(int i=1;i<n-1;i++){
        if(x[i]-h[i]>last_position){
            ans++;
            last_position=x[i];
        }else if(x[i]+h[i]<x[i+1]){
            ans++;
            last_position=x[i]+h[i];
        }else{
            last_position=x[i];
        }
    }
 
    cout<<ans<<"
";
 
    return 0;
}