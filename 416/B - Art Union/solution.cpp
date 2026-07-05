#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //n --> number of pictures , m --> number of painters
    int m,n;
    cin>>n>>m;
 
    vector<vector<int>>tt(n,vector<int>(m));
 
    //tt[i][j]-->time to paint i_th painting by j_th painter 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>tt[i][j];
        }
    }
 
    vector<vector<int>>dp(n,vector<int>(m));
    dp[0][0]=tt[0][0];
    for(int i=1;i<m;i++){
        dp[0][i]=dp[0][i-1]+tt[0][i];
    }
 
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0)
            dp[i][j]=dp[i-1][j]+tt[i][j];
            else{
                if(dp[i-1][j]<dp[i][j-1]){
                    dp[i][j]=dp[i][j-1]+tt[i][j];
                }else{
                    dp[i][j]=tt[i][j]+dp[i-1][j];
                }
            }
        }
    }
 
    for(int i=0;i<n;i++){
        cout<<dp[i][m-1]<<" ";
    }
 
    return 0;
 
}