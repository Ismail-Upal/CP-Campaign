#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t ; cin>>t;
    while(t--){
        ll n,d; cin>>n>>d;
        vector<ll>v(n);
        for(ll &i:v)cin>>i;
        ll ans=0;
        ll f=0;
        for(ll i=0;i<n;i++){
            if(v[i]<=d && f==1){ans++; f=0;}
            if(v[i]>d && f==0){ans++; f=1;}
        }
        cout<<ans<<endl;
    }
    return 0;
}