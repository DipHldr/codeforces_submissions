#include<iostream>
using namespace std;
int mod=1e9;
int main(){
    long long n;
    if(!(cin>>n))return 0;
 
    long long x=-1,y=-1;
    if(n>2){
        if(n%2==0){
            // int tt=n/2;
            x=(n/2)*(n/2)+1;
            y=(n/2)*(n/2)-1;
        }
        else{
            x=(n*n+1)/2;
            y=(n*n-1)/2;
        }
    }
 
    if(x!=-1&&y!=-1){
        cout<<y<<" "<<x<<"
";
    }else{
        cout<<-1<<"
";
    }
 
    return 0;
}