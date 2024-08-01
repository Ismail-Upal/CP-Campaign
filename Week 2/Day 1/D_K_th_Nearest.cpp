#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,q; cin>>n>>q;
    vector<ll>a(n);
    for(ll &i:a)cin>>i;
    vector<ll>b(q);
    vector<ll>k(q);
    for(ll i=0;i<q;i++){
        cin>>b[i]>>k[i];
    }
    vector<ll>d(n);
    for(ll i=0;i<n;i++){
        d[i]=abs(a[i]-b[j]);
    }
    return 0;
}