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
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());
    int mx=0, cnt=1;
    for(int i=1; i<n; i++){
        if(abs(v[i]-v[i-1]) <= k)cnt++;
        else {
            cnt=1;
        }
        mx=max(mx,cnt);
    }
    if(n==1)cout<<0<<endl;
    else cout<<n-mx<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}