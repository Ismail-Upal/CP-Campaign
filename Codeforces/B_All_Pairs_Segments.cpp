#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,q; cin>>n>>q;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++)cin>>v[i];
    map<ll,ll>mp;
    for(int i=1; i<=n; i++){
        ll f=1LL*(i-1) * (n-i+1), l = n-i;
        mp[f]+=(v[i]-v[i-1]-1);
        mp[f+l]++;
    }
    //for(auto i: mp)cout<<i.first<<' '<<i.second<<endl;
    while (q--){
        ll k; cin>>k;
        cout<<mp[k]<<' ';
    }
    cout<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}