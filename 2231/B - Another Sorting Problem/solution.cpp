#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
 
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    if(n<=2){
        cout<<"YES
";
        return;
    }
 
    int k=0;
    for(int i=0;i+1<n;i++){
        k=max(k,arr[i]-arr[i+1]);
    }
 
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            arr[i]+=k;
        }
    }
 
    cout<<((is_sorted(arr.begin(),arr.end()))?"YES
":"NO
");
 
}
 
int main(){
    int n;
    cin>>n;
    // int x=0;
    while(n--){
        solve();
        // x++;
    }
 
    // cout<<x<<"
";
}