#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int a,b,c;cin>>a>>b>>c;
    int mx=max({a,b,c});
    if(mx==a){
        if(b+c+1>=a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(mx==b){
        if(a+c+1>=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
   else if(mx==c){
        if(b+a+1>=c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}