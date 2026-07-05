#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int id1,id2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='B'){
                id1=i;
                break;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='B'){
                id2=i;
                break;
            }
        }
 
        cout<<id2-id1+1<<endl;
 
    }
}