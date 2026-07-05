#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n,k;
    if(!(cin>>n>>k))return 0;
 
    string s;
    cin>>s;
 
    auto find_maxi=[&](char cc){
        int left=0;
        int beauty=0;
        int k1=0;
        int maxi=-1;
 
        for(int right=0;right<n;right++){
            beauty++;
 
            if(s[right]!=cc){
                k1++;
            }
 
            while(k1>k&&left<n){
                if(s[left]!=cc)k1--;
                left++;
                beauty--;
            }
 
            maxi=max(maxi,beauty);
        }
 
        return maxi;
    };
 
    int ans=max(find_maxi('a'),find_maxi('b'));
 
    cout<<ans<<"
";
    
}