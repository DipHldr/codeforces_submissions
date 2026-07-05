#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    // string ss=to_string(t);
    string ss;
    cin>>ss;
    bool f=0;
 
    int n=ss.length();
    int last=ss[n-1]-'0';
    for(int i=0;i<n;i++){
        int tt=ss[i]-'0';
        if(tt%2==0&&tt<last){
            swap(ss[i],ss[n-1]);
            f=1;
            break;
        }
    }
 
    int tt=ss[n-1]-'0';
    if(tt%2!=0){
        for(int i=n-1;i>=0;i--){
            int xx=ss[i]-'0';
            if(xx%2==0){
                swap(ss[i],ss[n-1]);
                f=1;
                break;
            }
        }
    }
 
    if(f){
        cout<<ss<<endl;
    }else{
        cout<<-1<<endl;
    }
 
    return 0;
    
}