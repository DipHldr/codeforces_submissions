#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
 
      map<int,int>mp;
      for(int i=0;i<n;i++){
        mp[arr[i]]++;
      }
 
      int cnt=0;
      for(auto it:mp){        
            cnt+=it.second/2;
      }
 
      cout<<cnt<<endl;
	}
 
}