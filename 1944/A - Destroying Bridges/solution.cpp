#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
	int q;
	cin>>q;
	while(q--){
	  int n,k;
	  cin>>n>>k;
	  int brg=n*(n-1)/2;
	  int rem=brg-k;
	//   cout<<"ans: ";
	  if(n-1>k){
		cout<<n<<endl;
	  }else if(n-1<=k){
		cout<<1<<endl;
	  }else{
		cout<<rem+1<<endl;
	  }
	}
 
}