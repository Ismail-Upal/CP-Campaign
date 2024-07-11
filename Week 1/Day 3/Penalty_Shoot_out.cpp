//https://www.codechef.com/problems/PENALTYSHOOT
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        if(b>a+2 || a>b+1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
