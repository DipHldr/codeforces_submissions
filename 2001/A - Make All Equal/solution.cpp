#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int size;
      cin>>size;
      int a[size];
      for(int i=0;i<size;i++){
        cin>>a[i];
      }
 
      map<int,int>m;
 
      for(int i=0;i<size;i++){
        m[a[i]]++;
      }
 
      int maxi=INT_MIN;
      for(auto ele:m){
        if(ele.second>maxi){
            maxi=ele.second;
        }
      }
 
      cout<<size-maxi<<endl;
    }
    return 0;
}