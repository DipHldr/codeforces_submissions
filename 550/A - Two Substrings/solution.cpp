#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin>>s;
    if(s.find("AB")!=string::npos){
      int pos=s.find("AB");
      if(s.find("BA",pos+2)!=string::npos){
        cout<<"YES";
        return 0;
      }
    }
 
 
    if(s.find("BA")!=string::npos){
      int pos=s.find("BA");
      if(s.find("AB",pos+2)!=string::npos){
        cout<<"YES";
        return 0;
      }
    }
 
    cout<<"NO";
  
    return 0;
}