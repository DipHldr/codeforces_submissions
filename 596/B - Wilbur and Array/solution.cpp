#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
 
    ll sum=0LL;
    ll prev=0LL;
    for(int i=0;i<n;i++){
        sum=sum+(abs(arr[i]-prev));
        prev=arr[i]*1LL;
    }
 
    cout<<sum<<endl;
}