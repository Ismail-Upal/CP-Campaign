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
    ll b,c,d; cin>>b>>c>>d;
    auto good=[&](ll m){
        return (m|b)-(m*c)==d;
    };
    ll l= 0, r = 1e61;
    while (r>l+1)
    {
        ll m= l+(r-l)/2;
        if(good(m))l=m;
        else r=m;
    }
    cout<<l<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}