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
    int n, q; cin>>n>>q;
    vector<int>v(n+1), pre(n+1);
    ll s=0;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        s+=v[i];
        pre[i]+=pre[i-1]+v[i];
    }
    while(q--){
        int l, r, k; cin>>l>>r>>k;
        int sum=s;
        sum-=pre[r]-pre[l-1];
        sum+=(r-l+1)*k;
        if(sum%2)Y;
        else N;
    }
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}