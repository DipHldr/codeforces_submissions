#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
 
      if(n>4){
         vector<int>v;
 
      for(int i=1;i<=n;i++){
        if(i%2!=0)
        v.push_back(i);
      }
      int n1=v.size();
 
      for(int i=1;i<=n;i++){
        if(i%2==0)
        v.push_back(i);
      }
      int n2=v.size();
      if(n2%2!=0){
        int temp=v[n2-n1];
      v[n2-n1]=5;
      v[2]=temp;
 
      v[n2-n1+1]=4;
      v[n2-n1+2]=2;
      }else{
        int temp=v[n2-n1-1];
      v[n2-n1-1]=5;
      v[2]=temp;
 
      v[n2-n1]=4;
      v[n2-n1+1]=2;
      }
      
 
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
      }else{
        cout<<-1<<endl;
      }
     
 
	}
 
}