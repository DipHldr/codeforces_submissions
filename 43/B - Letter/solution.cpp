#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string tt1,tt2;
    getline(cin,tt1);
    getline(cin,tt2);
    int n=tt1.length();
    int m=tt2.length();
 
    string ss1,ss2;
    for(int i=0;i<n;i++){
        if(tt1[i]!=' ')ss1+=tt1[i];
    }
    
    for(int i=0;i<m;i++){
        if(tt2[i]!=' ')ss2+=tt2[i];
    }
    
    sort(ss1.begin(),ss1.end());
    sort(ss2.begin(),ss2.end());
    int x1=ss1.length();
    int x2=ss2.length();
    
    // cout<<ss1<<"
"<<ss2<<"
";
    vector<bool>vis(x1,false);
    for(int i=0;i<x2;i++){
        char c=ss2[i];
        for(int j=0;j<x1;j++){
            if(vis[j])continue;
 
            if(ss2[i]==ss1[j]){
                vis[j]=true;
                break;
            }
        }
    }
 
    // for(auto it:vis){
    //     cout<<it<<" ";
    // }
    // cout<<"
";
 
    int count=0;
    for(int i=0;i<x1;i++){
        if(vis[i])count++;
    }
 
    if(count==x2){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
 
    return 0;
}