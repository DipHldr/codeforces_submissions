#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
using ll=long long;
using ld=long double;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int solved=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int i=0;i<3;i++){
        int x;
        cin>>x;
        if(x==1)cnt++;
        }
        if(cnt>=2){
            solved++;
        }
    }
 
    cout<<solved<<endl;
 
}