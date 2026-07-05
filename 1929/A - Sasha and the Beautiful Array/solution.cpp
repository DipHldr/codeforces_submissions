#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int q;
	cin>>q;
	while(q--){
	   int n;
	   cin>>n;
	   int x;
	   int mn=INT_MAX;
	   int mx=INT_MIN;
	   for(int i=0;i<n;i++){
		cin>>x;
		mn=min(mn,x);
		mx=max(mx,x);
	   }
	   int ans=mx-mn;
	   cout<<ans<<endl;
	}
}