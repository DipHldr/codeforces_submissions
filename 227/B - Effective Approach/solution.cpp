#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    // vector<int>arr(n);
    unordered_map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        mp[t].push_back(i);
    }
 
    int q;
    cin>>q;
    vector<int>queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
 
    // cout<<"H
";
 
    long long x=0L,y=0L;
    for(int i=0;i<q;i++){
        x+=1LL*mp[queries[i]][0]+1LL;
        y+=1LL*n-1LL*mp[queries[i]].back();
    }
 
    cout<<x<<" "<<y<<"
";
 
    return 0;
 
}