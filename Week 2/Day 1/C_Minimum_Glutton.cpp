#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,x,y; cin>>n>>x>>y;
    vector<ll>a(n), b(n);
    for(ll &i:a)cin>>i;
    for(ll &i:b)cin>>i;
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    ll ans=0, sa=0,sb=0;
    for(int i=0;i<n;i++){
        sa+=a[i];
        sb+=b[i];
        if(sa<=x && sb<=y)ans++;
        else{ans++; break;} 
    }
    cout<<ans;
    return 0;
}