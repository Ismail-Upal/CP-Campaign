#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define dl double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc ll t;cin>>t;while(t--)
void solve(){
    ll n; cin>>n;
    vector<pair<ll,ll>>v;
    while(n--){
        ll x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    ll x1,y1, x2,y2; cin>>x1>>y1>>x2>>y2;

    ll d= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    for(auto i: v){ 
        ll r=((i.first-x2)*(i.first-x2) )+ ((i.second-y2)*(i.second-y2));

        if(d>=r){
            N;
            return;
        }
    }
    Y;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}