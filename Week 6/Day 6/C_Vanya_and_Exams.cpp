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
bool cmp(pair<ll,ll>f, pair<ll,ll>s){
    return f.second<s.second;
}
void solve(){
    ll n,r,avg; cin>>n>>r>>avg;
    vector<pair<ll,ll>>v;
    ll mark=0;
    for(int i=0; i<n; i++){
        ll a,b; cin>>a>>b;
        v.push_back({a,b});
        mark+=a;
    }
    if((mark/n) >=avg){cout<<0<<endl; return;}
    ll tar=n*avg - mark;
    ll ans=0;
    sort(v.begin(), v.end(), cmp);
    for(auto i: v){
        ll need=r-i.first;
        ll s= min(need, tar)*i.second;
        ans+=s;
        tar-=min(need,tar);
        if(tar<=0)break;
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}