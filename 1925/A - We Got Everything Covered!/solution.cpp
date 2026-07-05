#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int q;
    cin>>q;
    string alp="abcdefghijklmnopqrstuvwxyz";
    while(q--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                cout<<alp[j];
;            }
        }   
        cout<<endl;     
    }
}