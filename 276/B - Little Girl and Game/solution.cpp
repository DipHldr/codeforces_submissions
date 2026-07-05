#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string ss;
    cin>>ss;
 
    map<char,int>mp;
    for(int i=0;i<ss.length();i++){
        mp[ss[i]]++;
    }
 
    int odds=0;
    for(auto it:mp){
        if(it.second%2!=0){
            odds++;
        }
    }
    if(odds==0||odds==1||odds%2!=0){
        cout<<"First
";
    }else{
        cout<<"Second
";
    }
}