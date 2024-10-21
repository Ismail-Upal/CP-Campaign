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
    vector<ll>v(n);
    ll o=0, e=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2==0)e++;
        else o++;
    }
    if(o==n or e==n){cout<<0<<endl; return;}
    sort(v.rbegin(), v.rend());
    ll evmx=0;
        for(ll i=0; i<n; i++){
            if(v[i]%2==0){evmx = v[i]; break;}
        }
        ll s=0;
        for(ll i=0; i<n; i++){
            if(v[i]%2){s=v[i]; break;}
        }
        for(ll i=n-1; i>=0; i--){
            if( v[i]%2==0 and  v[i]<s ) s+=v[i];
        }
        if(s<=evmx)e++;
    
    cout<<e<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}