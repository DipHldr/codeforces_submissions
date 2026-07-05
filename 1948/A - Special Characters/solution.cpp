#include <iostream>
using namespace std;
 
void printstr(int n){
    int cnt=0;
    int k=n;
    string str="";
    int i=0;
    
for(i=2;i<=n;i+=4){
    // cout<<i;
    str+="AA";
    if(i<n)
    str+="BB";    
}
 
if(n<4){
    cout<<"AA"<<endl;
}else{
cout<<str<<endl;
}
 
}
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<"yes"<<endl;
            printstr(n);
        }else{
            cout<<"no"<<endl;
            // printstr(n);
        }
    }
}