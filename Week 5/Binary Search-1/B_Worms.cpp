//https://codeforces.com/contest/474/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
    vector<ll>v(n),pre(n);
    for(ll &i:v)cin>>i;
    pre[0]=v[0];
    for(int i=1;i<n;i++)pre[i]=pre[i-1]+v[i];
    //for(int i:pre)cout<<i;
    ll q;cin>>q;
    while(q--){
        ll x; cin>>x;
        int lo=lower_bound(pre.begin(), pre.end(), x)-pre.begin();
        cout<<lo+1<<endl;
    }
    return 0;
}