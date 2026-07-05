#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
void solve(){
  
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int n;
    // cin>>n;
    // while(n--){
    //   // cout<<"---->
";
    //   solve();
    // }
 
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
 
    sort(s.begin(),s.end(),[](string s1,string s2){
      return s1+s2<s2+s1;
    });
    string ss="";
    for(auto it:s)ss+=it;
 
    cout<<ss;
    return 0;
}