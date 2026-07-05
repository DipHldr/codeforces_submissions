#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int q;
	cin>>q;
	while(q--){
	   int n,k;
	   cin>>n>>k;
	   if(n==k){
		for(int i=0;i<n;i++){
			cout<<1<<" ";
		}
	   }else if(k==1){
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
	   }else if(n!=k||k!=1){
		cout<<-1;
	   }
 
	   cout<<endl;
	   
	}
 
}