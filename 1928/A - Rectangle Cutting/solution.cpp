#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        if(x==1&&y==1){
        cout<<"no"<<endl;
        }
        else if(x%2==0){
         if((x/2)>0&&x/2!=y){
            cout<<"yes"<<endl;
         }else if((y%2==0)&&(y/2>0)&&y/2!=x){
            cout<<"yes"<<endl;
         }else{
            cout<<"no"<<endl;
         }
        }else if(y%2==0){
            if((y/2)>0&&y/2!=x){
            cout<<"yes"<<endl;
         }else if((x%2==0)&&(x/2>0)&&x/2!=y){
            cout<<"yes"<<endl;
         }else{
            cout<<"no"<<endl;
         }
        }
        else{
            cout<<"no"<<endl;
        }
    }
}