#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
 
       int l=(n/2)+1;
       vector<int>v;
       if(n%2!=0){
        for(int i=1;i<=l;i++){
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
       
       for(int i=l+1;i<=n;i++){
        v.push_back(i);
       }
 
       for(int ele:v){
        cout<<ele<<" ";
       }
       cout<<endl;
       }
       else{
        cout<<-1<<endl;
       }
       
    }
}