//https://codeforces.com/contest/706/problem/B
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
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    ll q; cin>>q;
    sort(v.begin(), v.end());
    while(q--){
        ll x ; cin>>x;
        int up=upper_bound(v.begin(), v.end(), x)-v.begin();
        cout<<up<<endl;
    }
    return 0;
}