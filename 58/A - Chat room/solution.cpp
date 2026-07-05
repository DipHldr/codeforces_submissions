#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string ss;
    cin>>ss;
 
    int m=ss.length();
    string tt="hello";
    int n=tt.length();
 
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
 
 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(tt[i-1]==ss[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
 
    if(dp[n][m]==n){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
 
    return 0;
 
}