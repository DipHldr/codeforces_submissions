#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
 
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
 
    int total_cost=a[n-1]-a[0];
 
    vector<int>gaps;
    for(int i=0;i<n-1;i++){
        gaps.push_back(a[i+1]-a[i]);
    }
 
    sort(gaps.rbegin(),gaps.rend());
 
    for(int i=0;i<k-1;i++){
        total_cost-=gaps[i];
    }
 
    cout<<total_cost<<"
";
 
    return 0;
}