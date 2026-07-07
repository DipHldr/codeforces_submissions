#include<iostream>
using namespace std;
 
int main(){
    string n;
    int k;
    cin>>n>>k;
 
    int ll=n.length();
    for(int i=0;i<ll;i++){
        int maxi=n[i]-'0';
        int index=i;
        for(int j=i+1;j<=i+k&&j<ll;j++){
            int tt=n[j]-'0';
            // cout<<maxi<<" "<<tt<<"
";
            // cout<<i<<" "<<j<<"
";
            if(maxi<tt){
                maxi=tt;
                index=j;
            }
        }
        if(k>0&&index!=i){
 
            for(int pp=index;pp>i;pp--){
                swap(n[pp],n[pp-1]);
            }
            k=k-(index-i);
        }
    }
 
    cout<<n<<"
";
 
    return 0;
}