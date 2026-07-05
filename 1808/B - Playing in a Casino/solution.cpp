#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
void solve(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>>a(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>a[i][j];
  }
 
  long long ans=0;
 
  for(int i=0;i<m;i++){
    vector<int>col;
    for(int j=0;j<n;j++)col.push_back(a[j][i]);
 
    sort(col.begin(),col.end());
 
    for(int j=0;j<n;j++){
      ans+=1LL*col[j]*(2*j-n+1);
    }
  }
  cout<<ans<<endl;
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    while(n--){
      // cout<<"---->
";
      solve();
    }
    return 0;
}