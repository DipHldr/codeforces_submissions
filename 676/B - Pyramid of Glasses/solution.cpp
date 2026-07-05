#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    if(!(cin>>n>>t))return 0;
    double glass[12][12]={0.0};
 
    int glass_count=0;
    glass[1][1]=t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
 
            if(glass[i][j]>=1){
                glass_count++;
 
                double overflow=glass[i][j]-1.0;
 
                glass[i+1][j]+=overflow/2.0;
                glass[i+1][j+1]+=overflow/2.0;
            }
        }
    }
 
    cout<<glass_count<<"
";
 
    return 0;
    
}