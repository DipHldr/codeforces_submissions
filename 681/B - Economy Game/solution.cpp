#include<iostream>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
 
    ll x=n/123467,y=n/12346;
    for(int i=0;i<=x+1;i++){
        for(int j=0;j<=y+1;j++){
            ll tt=n-(i*1234567)-(j*123456);
            // cout<<tt<<"
";
            if(tt>=0&&tt%1234==0){
                cout<<"YES
";
                return 0;
            }
        }
    }
 
    cout<<"NO
";
 
    return 0;
    
}
 