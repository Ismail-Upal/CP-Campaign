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
    ll n,a,b; cin>>n>>a>>b;
    vector<ll>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int g = __gcd(a,b);
    for(int i=0; i<n; i++){
        v[i]=v[i]%g;
        //cout<<v[i]<<' ';
    }
    sort(v.begin(), v.end());
    int mn= v[n-1]-v[0];
    for(int i=0; i<n-1; i++){
        int m= v[i]+g -v[i+1];
        mn=min(m,mn);
    }
    cout<<mn<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}