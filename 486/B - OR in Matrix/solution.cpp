#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>zz;
    vector<pair<int,int>>xx;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int t;
            cin>>t;
            if(t==0){
                zz.push_back({i,j});
            }else{
                xx.push_back({i,j});
            }
        }
    }
    
    vector<vector<int>>arr(n,vector<int>(m,1));
    int tt=zz.size();
    
    for(int i=0;i<tt;i++){
        int x=zz[i].first;
        int y=zz[i].second;
        
        for(int j=0;j<n;j++){
            arr[j][y]=0;
        }
        for(int j=0;j<m;j++){
            arr[x][j]=0;
        }
    }
    
    int rr=xx.size();
    // cout<<"H
";
    int result=0;
    // for(auto it:xx)cout<<it.first<<" "<<it.second<<", ";
    for(int i=0;i<rr;i++){
        int f_row=0,f_col=0;
        int x=xx[i].first;
        int y=xx[i].second;
 
        for(int j=0;j<n;j++){
            if(arr[j][y]==1){
                f_col=1;
                break;
            }
        }
 
        for(int j=0;j<m;j++){
            if(arr[x][j]==1){
                f_row=1;
                break;
            }
        }
        if(f_row||f_col){
            result++;
        }else{
            break;
        }
    }
 
    if(result==rr){
        cout<<"YES
";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"
";
        }
    }else{
        cout<<"NO
";
    }
    
    return 0;
}