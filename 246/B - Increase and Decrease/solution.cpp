#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int sum=0;
    sum=accumulate(arr.begin(),arr.end(),sum);
 
    if(sum%n==0){
        cout<<n<<"
";
    }else{
        cout<<n-1<<"
";
    }
 
    return 0;
}