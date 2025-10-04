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
    ll a,b,n,ans,x=1; cin>>a>>b>>n;
    vector<ll>v(n);
    for(int i=0; i<n ;i++)cin>>v[i];
    ans=b-1;
    for(int i=0; i<n;i++){
        if(x+v[i]<=a){
            x+=v[i];
            ans+=min(a-1,x-1);
        }
        else ans+=a-1;
        x=1;
    }
    cout<<ans+1<<endl;
}
int main()
{
    optimize();
    tc{
        solve();
    }
    return 0;
}