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
    int l=1,r=2, ans=0;
    while(q--){
        char c;int i; cin>>c>>i;
        if(c=='L'){
            if(r>l && r<i) ans+= l+abs(n-i), l=i;
            else if(l<r && l>i) ans+=l+abs(n-i),l=i;
            else if(i>l)ans+= i-l, l=i;
            else if(i<l)ans+= i+n-l, l=i;
        }
        else if(c=='R'){
            if(l<i && l>r)ans+=r+abs(n-i), r=i;
            else if(l<r && l>i)ans+=i+abs(n-r), r=i;
            else if(i>r)ans+= i-r, r=i;
            else if(i<r)ans+= i+n-r, r=i;
        }
        
    }
    cout<<ans;
}
int main()
{
    optimize();
    
        solve();
    
    return 0;
}