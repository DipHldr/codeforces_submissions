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
    n=2*n;
    vector<int>people(n);
    for(int& p:people)cin>>p;
 
    sort(people.begin(),people.end());
 
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        vector<int>new_people;
        for(int k=0;k<n;k++){
          if(k!=i&&k!=j)new_people.push_back(people[k]);
        }
 
        int sum=0;
        for(int k=0;k<n-2;k+=2){
          sum+=new_people[k+1]-new_people[k];
        }
        mini=min(sum,mini);
 
      }
    }
    cout<<mini;
    return 0;
}