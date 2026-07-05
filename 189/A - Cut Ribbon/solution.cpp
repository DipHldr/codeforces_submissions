#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,a,b,c;
    cin>>n>>a>>b>>c;
 
    vector<int>pieces;
    pieces.push_back(a);
    pieces.push_back(b);
    pieces.push_back(c);
    vector<int>dp(n+1,-1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            if(i>=pieces[j]&&dp[i-pieces[j]]!=-1e9){
                dp[i]=max(dp[i],1+dp[i-pieces[j]]);
            }
        }
    }
 
    // for(auto it:dp)cout<<it<<" ";
    
    // cout<<"
";
 
    cout<<dp[n]<<"
";
 
}