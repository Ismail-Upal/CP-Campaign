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
        ll n,m,k; cin>>n>>m>>k;
        for(ll i=n;i>m;i--){
            cout<<i<<" ";
        }
        for(ll i=1;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}