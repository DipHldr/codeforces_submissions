#include<bits/stdc++.h>
using namespace std;
 
bool adj_matrix[4005][4005];
int digree[4005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    if(!(cin>>n>>m))return 0;
 
    vector<pair<int,int>>edges;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_matrix[u][v]=true;
        adj_matrix[v][u]=true;
        digree[u]++;
        digree[v]++;
        edges.push_back({u,v});
    }
 
    int mini=1e9;
    for(auto e:edges){
        int u=e.first;
        int v=e.second;
 
        for(int w=0;w<n;w++){
            if(w!=u&&w!=v&&adj_matrix[u][w]&&adj_matrix[v][w]){
                int deg=digree[u]+digree[v]+digree[w]-6;
                mini=min(mini,deg);
            }
        }
    }
 
    if(mini==1e9){
        cout<<-1<<"
";
    }else{
        cout<<mini<<"
";
    }
 
    return 0;
 
}