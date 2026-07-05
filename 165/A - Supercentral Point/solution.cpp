#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
 
    int count=0;
    for(int i=0;i<n;i++){
        bool l=false,r=false,u=false,d=false;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            // cout<<"H
";
            if((arr[i][0]==arr[j][0]&&arr[i][1]<arr[j][1])){
                l=true;
            }
 
            if(arr[i][0]==arr[j][0]&&arr[i][1]>arr[j][1]){
                r=true;
            }
 
            if(arr[i][0]>arr[j][0]&&arr[i][1]==arr[j][1]){
                u=true;
            }
 
            if(arr[i][0]<arr[j][0]&&arr[i][1]==arr[j][1]){
                d=true;
            }
 
        }
        if(l&&r&&u&&d){
            // cout<<arr[i][0]<<" "<<arr[i][1]<<"
";
            l=r=u=d=false;
            count++;
        }
    }
 
    cout<<count<<"
";
 
    return 0;
 
}