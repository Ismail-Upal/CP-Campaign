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
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
    vector<ll>v(n);
    int ev=0;
    for(ll i=0;i<n ;i++){
        cin>>v[i];
        if(v[i]%2==0)ev++;
    }
    if(ev!=n){cout<<0;return 0;}
    int ans=0,f=0;
    while(1){
        for(ll i=0;i<n; i++){
            v[i]=v[i]/2;
            if(v[i]%2!=0){
                f=1;
            }
        }
        ans++;
        if(f)break;
    }
    cout<<ans;
    return 0;
}