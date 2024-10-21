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
#define tc ll t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll num = 1e7+3;
vector<ll>prime(num, 1), v;
void solve(){
    ll n,m; cin>>n>>m;
    ll k=2;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m;j++){
                cout<<v[k]<<' ';
                k++;
        }
         cout<<endl;
    }
}
int main()
{
    optimize();
    prime[1]=0;
    for(ll i=2; i<=num; i++){
        if(!prime[i])continue;
        for(ll j=i*i; j<=num; j+=i){
            prime[j]=0;
        }
    }
    for(ll i=2; i<=num; i++){
        if(prime[i])v.push_back(i);
    }
    tc{
        solve();
    }
    return 0;
}