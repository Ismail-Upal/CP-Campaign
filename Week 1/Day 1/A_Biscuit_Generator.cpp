#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,t; cin>>a>>b>>t;
    t+=0.5;
    ll ans=(t/a)*b;
    cout<<ans;
    return 0;
}