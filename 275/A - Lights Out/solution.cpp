#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // int arr[3][3];
    vector<vector<int>>arr(3,vector<int>(3));
 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
 
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"
";
    // }
    
    vector<vector<int>>lt(3,vector<int>(3,1));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2!=0){
                // cout<<"H
";
                lt[i][j]=!lt[i][j];
 
                if(i>0)
                lt[i-1][j]=!lt[i-1][j];
                
                if(j>0)
                lt[i][j-1]=!lt[i][j-1];
                
                if(i<2)
                lt[i+1][j]=!lt[i+1][j];
                
                if(j<2)
                lt[i][j+1]=!lt[i][j+1];
            }
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<lt[i][j];
        }
        cout<<"
";
    }
 
    return 0;
}