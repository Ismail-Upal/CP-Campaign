//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
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
    ll n, k; cin>>n>>k;
    // ll mx=0, sum=0;
    // for(int i=0 ;i<n; i++){
    //     ll x; cin>>x;
    //     mx=max(mx, x);
    //     sum+=x;
    // }
    // ll m=sum/k;
    // if(sum%k)m++;
    // cout<<max(m,mx)<<endl;
    vector<int>v(n); 
    ll sum=0;
    for(int i=0; i<n; i++)cin>>v[i] ,sum+=v[i];
    ll l=*max_element(v.begin(), v.end())-1, r=1e16;
    auto good=[&](ll m){
        return sum<=1LL*m*k;
    };
    while(r>l+1){
        ll m=l+(r-l)/2;
        if(good(m))r=m;
        else l=m;
    }
    cout<<r<<endl; 
}  
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}