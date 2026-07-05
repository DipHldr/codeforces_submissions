#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		int n,a,b;
		cin>>n>>a>>b;
		int ans=0;
		if(a*2>b){
			ans=n/2*b+(n-2*(n/2))*a;
		}else{
			ans=n*a;
		}
		cout<<ans<<endl;
		
	}
}