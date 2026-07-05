#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        for(int val=1;val<=2*t;val++){
            if(val%2==0)continue;
            cout<<val<<" ";
        }
        cout<<"
";
    }
 
    return 0;
}