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
ll n,x,y; 
bool good(ll t){
    if(t<min(x,y))return false;
    int cnt= 1;
    t-=min(x,y);
    cnt+=(t/x)+(t/y);
    return cnt>=n;
}
void solve(){
    cin>>n>>x>>y;
    ll l=0, r=n*max(x,y);
    while(r>l+1){
        ll m=l+(r-l)/2;
        if(good(m))r=m;
        else l=m;
    }
    cout<<r;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}