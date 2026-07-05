#include<bits/stdc++.h>
using namespace std;
 
void take_input(unordered_map<string,array<int,3>>&ss,vector<string>&order){
    
    auto is_identical = [&](const string& num) {
        for(int i = 1; i < num.size(); i++) {
            if(num[i] != num[0]) return false;
        }
        return true;
    };
 
    auto is_decreasing = [&](const string& num) {
        for(int i = 1; i < num.size(); i++) {
            if(num[i] >= num[i-1]) return false;
        }
        return true;
    };
 
    int xx;
    string name;
    cin>>xx>>name;
    order.push_back(name);
    ss[name][0]=0;
    ss[name][1]=0;
    ss[name][2]=0;
    
    
 
    for(int i=0;i<xx;i++){
        string num;
        cin>>num;
        
        string number="";
        for(int tt=0;tt<8;tt++){
            if(num[tt]=='-')continue;
            number+=num[tt];
        }
        
        // int kk=stoi(number);
        int index=2;
        if(is_identical(number)){
            index=0;
        }
        else if(is_decreasing(number)){
            index=1;
        }
        
        
        ss[name][index]++;
    }
 
}
 
int main(){
    int t;
    
    cin>>t;
    int xx=t;
    unordered_map<string,array<int,3>>ss;
    vector<string>order;
    while(t--){
       
        take_input(ss,order);
        
    }
    
    
    
    int maxi_0=INT_MIN,maxi_1=INT_MIN,maxi_2=INT_MIN;
    
    vector<string>f1,f2,f3;
    for(auto name:order){
        if(ss[name][0] > maxi_0) maxi_0 = ss[name][0];
        if(ss[name][1] > maxi_1) maxi_1 = ss[name][1];
        if(ss[name][2] > maxi_2) maxi_2 = ss[name][2];
    }
    for(auto name:order){
        if(ss[name][0]==maxi_0)f1.push_back(name);
        if(ss[name][1]==maxi_1)f2.push_back(name);
        if(ss[name][2]==maxi_2)f3.push_back(name);
    }
 
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<f1.size();i++){
        if(i!=0)cout<<", ";
        cout<<f1[i];
    }
    cout<<".
";
 
    cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<f2.size();i++){
        if(i!=0)cout<<", ";
        cout<<f2[i];
    }
    cout<<".
";
 
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<f3.size();i++){
        if(i!=0)cout<<", ";
        cout<<f3[i];
    }
    cout<<".
";
 
    // for(auto it:ss){
    //     cout<<it.first<<"-->";
    //     for(auto ele:it.second){
    //         cout<<ele<<", ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}