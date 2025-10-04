//https://codeforces.com/problemset/problem/440/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
    ll ans=n*(n+1)/ 2;
    
    for(ll i=0;i<n-1;i++){
        ll x; cin>>x;
        ans-=x;
    }
    cout<<ans;
    return 0;
}