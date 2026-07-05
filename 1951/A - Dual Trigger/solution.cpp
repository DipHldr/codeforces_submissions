#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		string s;
		cin>>n>>s;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				cnt++;
			}
			
		}
		bool flag=true;
		if(cnt==2){
		for(int i=1;i<n;i++){
			if(s[i]=='1'&&s[i-1]=='1'){
				flag=false;
				break;
			}
		}
	}
 
		if(flag&&(cnt%2==0&&n>2||(n==1||n==2)&&cnt==0)){
		cout<<"yes"<<endl;
		}
		else
		cout<<"no"<<endl;
	}
}