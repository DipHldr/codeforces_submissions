#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
 
      pair<int,int>ans;
      sort(arr,arr+n);
      int i=0,j=n-1;
      while(i<j){
        if(arr[i]*arr[j]==(n-2)){
            ans.first=arr[i];
            ans.second=arr[j];
            break;
        }
        if(arr[i]*arr[j]>(n-2)){
            j--;
        }else if(arr[i]*arr[j]<(n-2)){
            i++;
        }
      }
 
      cout<<ans.first<<" "<<ans.second<<endl;
 
	}
 
}