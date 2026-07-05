#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
int nxt(){
    int n;
    cin>>n;
    return n;
}
 
int main(){
    int n=nxt();
    vector<int>a(n);
    generate(all(a),nxt);
    int m=nxt();
    vector<int>b(m);
    generate(all(b),nxt);
 
    vector<int>dp(m,0);
    vector<int>parent(m,-1);
 
    for(int i=0;i<n;i++){
        int current_max=0;
        int last_parent=-1;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                dp[j]=current_max+1;
                parent[j]=last_parent;
            }else if(b[j]<a[i]){
                if(dp[j]>current_max){
                    current_max=dp[j];
                    last_parent=j;
                }
            }
        }
    }
 
    int best_index=-1,res=0;
    for(int i=0;i<m;i++){
        if(dp[i]>res){
            res=dp[i];
            best_index=i;
        }
    }
 
    cout<<res<<"
";
    vector<int>path;
    while(best_index!=-1){
        path.push_back(b[best_index]);
        best_index=parent[best_index];
    }
    reverse(all(path));
 
    for(auto ele:path){
        cout<<ele<<" ";
    }
 
    return 0;    
    
}