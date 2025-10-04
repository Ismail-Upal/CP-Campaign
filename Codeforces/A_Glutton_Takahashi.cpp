#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    ll flag=0;
    while(t--){
        string s;
        cin>>s;
        if(s=="sweet"){
            flag++;
            if(t==0)flag=0;
            if(flag==2)break;
        }
        else{
            flag=0;
        }
    }
    if(flag==2)cout<<"No";
    else cout<<"Yes";
    return 0;
}