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
#define tc int t;cin>>t;while(t--)
void solve(){
    ll n, f=0; cin>>n;
    for(int i=1; i<=n; i++){
        ll x; cin>>x;
       // cout<<x<<' '<<i<<endl;
        if(x<=i){f=1;}
    }
    if(f)Y;
    else N;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}