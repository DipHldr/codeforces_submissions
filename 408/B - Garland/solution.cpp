#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string ss,tt;
    cin>>ss;
    cin>>tt;
 
    int n=ss.length();
    int m=tt.length();
 
    vector<int>color(26);
    vector<int>garland(26);
 
    for(int i=0;i<n;i++){
        int cc=ss[i]-'a';
        color[cc]++;
    }
    
    for(int i=0;i<m;i++){
        int cc=tt[i]-'a';
        garland[cc]++;
    }
 
    int ans=0;
    for(int i=0;i<26;i++){
        if(garland[i]>0){
            if(color[i]==0){
                ans=0;
                break;
            }
            if(garland[i]>color[i]){
                ans+=color[i];
            }else{
                ans+=garland[i];
            }
        }
    }
 
    // cout<<"garland
";
    // for(int i=0;i<26;i++){
    //     cout<<garland[i]<<" ";
    // }
    // cout<<endl;
 
    // cout<<"color
";
    // for(int i=0;i<26;i++){
    //     cout<<color[i]<<" ";
    // }
    // cout<<endl;
 
    if(ans>0){
        cout<<ans<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}