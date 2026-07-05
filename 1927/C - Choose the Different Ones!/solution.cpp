#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int q;
    cin>>q;
    while(q--){
       int n,m,k;
       cin>>n>>m>>k;
       int arr1[n],arr2[m];
       multiset<int>ms1,ms2,common;
       for(int i=0;i<n;i++){
        cin>>arr1[i];
        ms1.insert(arr1[i]);
       }
       for(int i=0;i<m;i++){
        cin>>arr2[i];
        ms2.insert(arr2[i]);
        if(ms1.find(arr2[i])!=ms1.end()){
          common.insert(arr2[i]);
        }
       }
       int cnt1=0,cnt2=0;
       bool flag=true;
       for(int i=1;i<=k;i++){
        if(ms1.find(i)==ms1.end() and ms2.find(i)==ms2.end()){
          flag=false;
          break;
        }else if(common.find(i)!=common.end()){
          continue;
        }else if(ms1.find(i)!=ms1.end()){
          cnt1++;
          ms1.erase(ms1.find(i));
        }else{
          cnt2++;
          ms2.erase(ms2.find(i));
        }
        if(cnt1>k/2 or cnt2>k/2){
          flag=false;
          break;
        }
       }
       if(common.size()<(k/2-cnt1)+(k/2-cnt2))
       flag=false;
 
       if(flag)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
 
 
 
    }
}
 
 
 