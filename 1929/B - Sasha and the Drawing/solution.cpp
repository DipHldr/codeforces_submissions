#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int q;
	cin>>q;
	while(q--){
	   int n,k;
	   cin>>n>>k;
	   if(k==((4*n)-2)){
		cout<<2*n<<endl;
		// cout<<"hello"<<endl;
	   }else if(k%2!=0){
		cout<<(k+1)/2<<endl;
		// cout<<"hello1"<<endl;
	   }else{
		cout<<k/2<<endl;
		// cout<<"hello2"<<endl;
	   }
	}
}