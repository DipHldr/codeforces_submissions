#include <iostream>
using namespace std;
 
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,m,k;
        cin>>n>>m>>k;
        int b[n],c[m],cnt=0;
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<m;i++)cin>>c[i];
 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i]+c[j]<=k)
                cnt++;
            }
        }
        cout<<cnt<<endl;
 
    }
}