#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a,a+n);
        int res=floor(float((float)n/2.0));
 
        cout<<a[res]<<endl;
 
    }
    return 0;
}