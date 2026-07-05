#include <bits/stdc++.h>
using namespace std;
 
string solve(int n,int arr[]){
    unordered_map<char,int>mp;
    string all="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<all.length();i++){
        mp[all[i]]=0;
    }
    string s="";
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(mp[all[j]]==arr[i]){
                s+=all[j];
                mp[all[j]]++;
                break;
            }
        }
    }
    return s;
 
}
 
int main() {
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
 
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
 
       string s=solve(n,arr);
       cout<<s<<endl; 
    }
}
 
 
 