#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
 
      priority_queue<int,vector<int>,greater<int>>q;
      // priority_queue<int>q;
 
      for(int i=0;i<n;i++)q.push(a[i]);
      int favg=0;
      while(!q.empty()){
         auto num1=q.top();
         q.pop();
         auto num2=q.top();
         q.pop();
         // int nlen=n-2;
         // cout<<num1<<" "<<num2<<endl;
          favg=(num1+num2)/2;
         // vector<int>aux;
 
         // for(int i=0;i<n;i++){
         //    if(a[i]==num1)a[i]=-1;
         //    if(a[i]==num2)a[i]=-1;
         // }
         // for(int i=0;i<n;i++){
         //    if(a[i]!=-1)
         //    aux.push_back(a[i]);
         // }
 
         // aux.push_back(favg);
 
         q.push(favg);
         if(q.size()==1)break;
      }  
      cout<<favg<<endl;  
   } 
    
}