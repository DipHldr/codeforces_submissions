#include<bits/stdc++.h>
using namespace std;
 
bool is_prime(int t){
    int count=0;
    for(int i=2;i<=sqrt(t);i++){
        if(t%i==0){
            count++;
        }
    }
 
    return !count;
}
 
 
int main(){
    int n,m;
    cin>>n>>m;
 
    int next=n+1;
    while(!is_prime(next))next++;
 
    if(next==m){
        cout<<"YES
";
    }else{
        cout<<"NO
";
    }
    return 0;
}