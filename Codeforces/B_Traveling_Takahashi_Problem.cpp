#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define dl long double
#define endl "\n"
#define sz(x) (ll)(x).size()
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
void solve(){
    dl n; cin>>n;
    cout<<fixed<<setprecision(20);
    dl ans=0;
    dl a=0,b=0;
    for(int i=1; i<=n; i++){
        
        dl x,y; cin>>x>>y;
        dl f=(a-x), s=(b-y);
        dl res=sqrt(f*f+ s*s);
        ans+=res;
        a=x, b=y; 
    }
    dl f=(a-0), s=(b-0);
        dl res=sqrt(f*f+ s*s);
        ans+=res;
    cout<<ans;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}