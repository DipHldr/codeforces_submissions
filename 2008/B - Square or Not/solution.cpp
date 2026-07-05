#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
 
      int flag=0;
      //checking for square matrix
      int k;
      for(int i=1;i<=s.length();i++){
        if((n/i)==i&&(n%i)==0){
          k=i;
          flag=1; 
          break;         
        }
      }
 
      // cout<<"here"<<endl;
      // cout<<flag<<endl;
      if(flag){
        vector<vector<int>>mat(k,vector<int>(k,0));
        vector<vector<int>>vis(k,vector<int>(k,0));
        //construct matrix
        int idx=0;
        for(int i=0;i<k;i++){
          for(int j=0;j<k;j++){
            if(s[idx]=='1'){
              mat[i][j]=1;
            }else{              
              mat[i][j]=0;
            }
            idx++;
          }
        }
 
        // for(int i=0;i<k;i++){
        //   for(int j=0;j<k;j++){
        //     cout<<mat[i][j]<<" ";
        //   }
        //   cout<<endl;
        // }
 
       
 
       //marking visited to edges
        for(int i=0;i<k;i++){
          for(int j=0;j<k;j++){
            if(i==0||i==k-1||j==0||j==k-1){
              if(mat[i][j]==1){
                vis[i][j]=1;
              }
            }
          }
        }
 
        //printing visited array
        //  for(int i=0;i<k;i++){
        //   for(int j=0;j<k;j++){
        //     cout<<vis[i][j]<<" ";
        //   }
        //   cout<<endl;
        // }
 
        int nflag=1;
        for(int i=0;i<k;i++){
          for(int j=0;j<k;j++){
            if(!vis[i][j]&&mat[i][j]!=0){
              // cout<<mat[i][j]<<" ";
              nflag=0;
              break;
            }
            
          }
        }
 
        // cout<<endl;
        // cout<<nflag<<endl;
        if(nflag){
          cout<<"Yes"<<endl;
        }else{
          cout<<"No"<<endl;
        }
 
 
      }
      else{
        cout<<"No"<<endl;
      }
           
    }
 
    
}
 
//111110011111
//111111111
//111101111
//1111