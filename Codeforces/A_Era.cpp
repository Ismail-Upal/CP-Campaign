//https://codeforces.com/problemset/problem/1604/A
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
        ll n; cin>>n;
        vector<ll>v(n+1);
        for(ll i=1;i<=n;i++)cin>>v[i];

        ll c=0;
        for(ll i=1; i<=n;i++){
            c=max(v[i]-(i),c);
        }
        cout<<c<<endl;
    }
    return 0;
}
