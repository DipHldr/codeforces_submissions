#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int n,k;
    if(!(cin>>n>>k))return 0;
 
    auto calculate_val=[&](int tt){
 
        int xx=tt;
        int i=1;
        while(tt/(int)pow(k,i)>0){
            xx+=tt/pow(k,i);
            i++;
        }
 
        return xx;
    };
 
    int left=0,right=1e9+7;
 
    int ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
 
        if(calculate_val(mid)<n){
            left=mid+1;
        }else{
            right=mid-1;
            ans=mid;
        }
    }
 
    cout<<ans<<"
";
 
    return 0;
}