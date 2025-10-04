//Man Rabbuka ?
//Ma Dinuka ?
//Man Nabiyyuka ? 
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        ll n; cin>>n; 
        vector<ll>v(n+2);
        for(int i=1; i<=n ;i++){
            cin>>v[i];
        }
        int x, y;
        if(n%2 == 0){
            x=n, y=n;
        }
        else{
            x=n+1, y=n; 
        }
        v[0]=v[1]-1;
        v[n+1]=v[n]+1;
        ll ans=-1;

        for(int i=1; i<x; i+=2){
            ll diff = v[i+1]-v[i];
            ans = max(diff, ans);
        }
        if(n%2){
            ll a=-1;
            for(int i=0; i<y; i+=2){
                ll diff = v[i+1]-v[i];
                a = max(diff, a);
            }
            ans = min(ans, a); 
        }
        
        cout<<ans<<endl;
    }
 
    return 0;
}